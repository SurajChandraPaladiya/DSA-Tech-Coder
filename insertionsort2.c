#include <stdio.h>

void printarray(int *a, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void insertionsort(int *a, int size)
{
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key=a[i];
        j = i - 1;
        while (j >= 0 && a[j] < key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{

    // int a[]={2,33,67,34,11,56,89,76};
    // int n=8;
    int n, a[n];
    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array before sorting:\n");
    printarray(a, n);
    insertionsort(a, n);
    printf("Array after sorting:\n");
    printarray(a, n);

    return 0;
}