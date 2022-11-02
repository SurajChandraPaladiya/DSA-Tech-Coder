#include <stdio.h>

void printarray(int a[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void bubblesort(int a[], int size)
{
    int temp;
    for (int i = size - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (a[j - 1] > a[j])
            {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{

    int n, a[n];
    printf("Enter the size of array:\n");
    scanf("%d",&n );
    printf("Enter  the Array:\n");
    for( int i=0; i<n; i++){

        scanf("%d",&a[i]);
    }
    printf("Array before sortying:\n");
    printarray(a, n);
    bubblesort(a, n);
    printf("Array after sorting:\n");
    printarray(a, n);

    return 0;
}