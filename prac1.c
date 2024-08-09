#include <stdio.h>

int freq(int *arr, int size, int val)
{
    int i, f = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == val)
            f++;
    }
    return f;
}

int deleteatpos(int *arr, int n)
{
    int pos, i;
    printf("enter index position which element need to be deleted : ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= n)
    {
        printf("index not present\n");
        return 0;
    }
    printf("element deleted : %d\n", arr[pos]);

    for (i = pos + 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    return 1;
}

int insertatPos(int *arr, int maxSize, int n)
{
    if (n > maxSize)
    {
        printf("new value cannot be entered as the array is full\n");
        return 0;
    }
    int pos, val, i;
    printf("enter value to be inserted : ");
    scanf("%d", &val);
    printf("enter index position to be inserted : ");
    scanf("%d", &pos);
    if (pos < 0 || pos > n)
    {
        printf("INVALID INDEX... INSERTION NOT POSSIBLE\n");
        return 0;
    }
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;
    return 1;
}

void insert(int *arr, int maxSize, int pos)
{
    int val;
    if (pos > maxSize)
    {
        printf("new element cannot be inserted\n");
        return;
    }
    printf("enter the value to be inserted\n");
    scanf("%d", &val);
    arr[pos - 1] = val;
}

int lsearch(int *arr, int n, int val)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (val == arr[i])
            return 1;
    }
    return 0;
}

int min(int *arr, int size)
{
    int m = arr[0];
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] < m)
            m = arr[i];
    }
    return m;
}

int max(int *arr, int size)
{
    int m = arr[0];
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > m)
            m = arr[i];
    }
    return m;
}

int secondmax(int *arr, int size)
{
    int m1 = max(arr, size);
    int m2 = arr[0];
    int d = m1 - arr[0], d2;
    int i;
    for (i = 0; i < size; i++)
    {
        d2 = m1 - arr[i];
        if (d2 < d && d2 != 0)
        {
            d = d2;
            m2 = arr[i];
        }
    }
    return m2;
}

int main()
{
    int arr[20], size = 20, n = 0, choice, result, val;
    while (1)// for(;1;)
    {
        printf("Menu\n");
        printf("1. insert\n");
        printf("2. max\n");
        printf("3. linear search\n");
        printf("4. print the array\n");
        printf("5. delete last\n");
        printf("6. insert at pos\n");
        printf("7. delete at pos\n");
        printf("8. second highest\n");
        printf("9. frequency\n");
        printf("10. exit\n");
        printf("enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            n++;
            insert(arr, size, n);
            break;
        case 2:
            result = max(arr, n);
            printf("max = %d\n", result);
            break;
        case 3:
            printf("enter value to be searched : ");
            scanf("%d", &val);
            result = lsearch(arr, n, val);
            printf("the value %d is %s\n", val, result == 1 ? "present" : "absent");
            break;
        case 4:
            if (n == 0)
            {
                printf("Array is empty\n");
                break;
            }
            int i;
            printf("Array = ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 5:
            if (n == 0)
            {
                printf("no element to be deleted");
                break;
            }
            printf("item to be deleted : %d\n", arr[n - 1]);
            n--;
            break;
        case 6:
            result = insertatPos(arr, size, n);
            if (result == 1)
                n++;
            break;
        case 7:
            result = deleteatpos(arr, n);
            if (result == 1)
                n--;
            break;
        case 8:
            result = secondmax(arr, n);
            printf("second max = %d\n", result);
            break;
        case 9:
            printf("enter the value whose frequency needed to be calculated : ");
            scanf("%d", &val);
            result = freq(arr, n, val);
            printf("frequency = %d\n", result);
            break;
        case 10:
            printf("end of program ");
            return 0;
        default:
            printf("INVALID INPUT.. ENTER AGAIN\n");
            break;
        }
    }
}
