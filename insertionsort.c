//C PROGRAM FOR IMPLEMENTATION OF INSERTION SORT ALGORITHM

#include<stdio.h>

void printarray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void insertionsort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[]={4,6,3,78,56,45,89,23};
    int n=8;
    
    printf("Array before sorting:\n");
    printarray(arr, n);
    insertionsort(arr, n);
    printf("Array after sorting:\n");
    printarray(arr, n);

    return 0;
}