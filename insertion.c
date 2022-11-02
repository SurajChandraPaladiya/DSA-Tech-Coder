//C PROGRAM FOR INSERTION IN AN ARRAY
#include <stdio.h>

void printarray( int arr[], int size);
void insertion(int arr[], int size, int capacity);

int main()
{
    int arr[8]={5,6,34,67,3};

    int size=5, capacity=8;
    printf("Array Before insretion:\n");
    printarray( arr, size);
    
    insertion(arr, size, capacity);
    size+=1;
    printf("Array After insretion:\n");
    printarray(arr, size);

    return 0;
}


void printarray( int arr[], int size){

     for (int  i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertion(int arr[], int size, int capacity){
    
    int index, element;
    printf("enter the index where you want insertion\n");
    scanf("%d", &index);
    if(size>=capacity || index>=capacity){
    printf("Insertion not possible");
    }

    else{
        
        printf("enter the element you want to insert\n");
        scanf("%d", &element);

    for(int i=size-1; i>=index; i--){

        arr[i+1]=arr[i];
    }

    arr[index]=element;
    printf("Inerstion completed\n");
    }
}