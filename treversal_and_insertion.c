#include <stdio.h>

void display(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void create(int *arr, int n)
{
   
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}

void insertion(int arr[], int size,int index, int element){

    for(int i=size-1;i>= index; i--){

        arr[i+1]=arr[i];
    }

    arr[index]=element;
}


int main()
{

    int n, capacity, index,element;
    printf("Enter the capacity of Array:\n");
    scanf("%d", &capacity);
    printf("Enter the size of Array:\n");
    scanf("%d", &n);
    int arr[capacity];
    //Array travesal by insreting the elements of array
     if(n>capacity){
        printf("You can not create an array larger than its capacity...!!\n");
    }
    else if(n<=capacity){
    create(arr, n);
    //Array Traversal by displaying the elements of array
    printf("Array Before insertion:\n");
    display(arr,n);
    }

    if(n<capacity){
    
    printf("Enter the index where you want to insert the element\n");
    scanf("%d", &index);
    if(index>capacity){
        printf("Insertion is not possible at the index larger then capacity..!@!\n");
    
    }
    else{
    printf("Enter the elememnt you want to insert\n");
    scanf("%d", &element);

    
    insertion(arr, n, index,  element);
    n+=1;
    printf("Array after insertion:\n");
    display(arr,n);

    }

    }
    printf("You have reached at the end of the program...! Closing the program..!!\n");

    return 0;
}
