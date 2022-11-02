#include <stdio.h>

int search(int arr[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {

            return i;
        }
    }

    return -1;
}


int main()
{

    int arr[] = {5, 7, 78, 23, 45, 54, 3, 8};
    int n = 8, element=23;
    int index= search(arr, n, element);

    if(index== -1){
        printf("Element not found\n");

    }
    else{
        printf("We found element %d at index %d\n", element, index);
    }
    return 0;
}