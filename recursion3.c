// tower of hanoi

#include <stdio.h>

void toh(int n, int from, int to, int via)
{
    if (n == 1)
    {
        printf("move plate 1 from %d to %d via %d\n", from, to, via);
        return;
    }
    toh(n - 1, from, via, to);
    printf("move plate %d from %d to %d via %d\n", n, from, to, via);
    toh(n - 1, via, to, from);
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("INVALID INPUT\n");
        return 0;
    }
    toh(n, 1, 3, 2);
    return 0;
}