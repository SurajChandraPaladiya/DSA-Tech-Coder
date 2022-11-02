#include <stdio.h>

void selectionsort(int *a, int n)
{
    int maxidx, temp;

    for (int i = n - 1; i >= 1; i--)
    {
        maxidx = i;

        for (int j = 0; j < i; j++)
        {
            if (a[j] >= a[maxidx])
            {
                maxidx = j;
            }
        }

        temp = a[i];
        a[i] = a[maxidx];
        a[maxidx] = temp;
    }
}

void printarray(int *a, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

int main()
{
    int a[] = {4, 5, 78, 1, 4, 9, 34};

    int n = 7;

    printf("Array before sorting:\n");
    printarray(a, n);
    selectionsort(a, n);
    printf("\n");
    printf("Array after sorting:\n");
    printarray(a, n);

    return 0;
}