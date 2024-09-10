// factorial

#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("INVALID INPUT\n");
        return 0;
    }
    printf("Factorial of %d is %d\n", n, fact(n));
    return 0;
}