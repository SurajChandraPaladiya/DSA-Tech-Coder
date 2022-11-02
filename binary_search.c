#include <stdio.h>

int binarysearch(int arr[], int size, int element)
{

    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {

            return mid;
        }

        else if (arr[mid] < element)
        {

            low = mid + 1;
        }
        else
        {

            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 7, 8, 45, 67, 79, 145, 657};
    int size=sizeof(arr)/sizeof(int);
    int element;
    printf("Enter the element you want to search for:\n");
    scanf("%d", &element);

    int index = binarysearch(arr, size, element);
    if(index>-1){
    printf("We found the element %d at the index %d\n", element, index);
    }

    else{
        printf("The element %d is not present in the array\n", element);
    }
    return 0;
}