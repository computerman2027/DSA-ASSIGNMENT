#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXSIZE 50

char stack[MAXSIZE];
int top = -1;
char ans[100];

int presedence(char ch)
{
    switch (ch)
    {
    case '(':
        return 0;
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '%':
        return 3;
    case '^':
        return 4;
    }
}
void push(char n)
{
    if (top + 1 == MAXSIZE)
    {
        printf("OVERFLOW\n");
        return;
    }
    stack[++top] = n;
}
char pop()
{
    if (top == -1)
    {
        printf("UNDERFLOW\n");
        return -1;
    }
    top--;
    return stack[top + 1];
}
char peep()
{
    if (top == -1)
    {
        printf("STACK IS EMPTY\n");
        return -1;
    }
    return stack[top];
}
void intopost(char *str, char *ans2)
{
    push('(');
    int l = strlen(str);
    char d;
    int i, k = 0;
    for (i = 0; i < l; i++)
    {
        if (isdigit(str[i]) || isalpha(str[i]))
        {
            ans[k] = str[i];
            k++;
        }
        else if (str[i] == '(')
        {
            push('(');
        }
        else if (str[i] == ')')
        {
            d = pop();
            if (k > 0 && ans[k - 1] != ',')
            {
                ans[k] = ',';
                k++;
            }
            while (d != '(')
            {
                ans[k] = d;
                ans[k + 1] = ',';
                k += 2;
                d = pop();
            }
        }
        else
        {
            if (k > 0 && ans[k - 1] != ',')
            {
                ans[k] = ',';
                k++;
            }
            while (presedence(peep()) >= presedence(str[i]))
            {
                d = pop();
                ans[k] = d;
                ans[k + 1] = ',';
                k += 2;
            }
            push(str[i]);
        }
    }
    ans[k - 1] = ' ';
    ans[k] = '\0';
}

int main()
{
    char str[50];
    printf("Enter infix expression : ");
    scanf("%[^\n]", str);
    int l = strlen(str);
    str[l] = ')';
    str[l + 1] = '\0';
    intopost(str, ans);
    printf("Postfix expression = %s\n", ans);
    return 0;
}