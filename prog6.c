#include <stdio.h>

int binarysearch(int arr[], int size, int element)
{

    int low = 0;
    int high = size - 1;
    int mid;

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

    int arr[] = {2, 5, 7, 9, 12, 45, 67, 890};
    int n = 8;
    int element = 45 ;

    int index = binarysearch(arr, n, element);

    if (index == -1)
    {
        printf("Element not found\n");
    }

    else
    {
        printf("We found element %d at index %d\n", element, index);
    }
    return 0;
}