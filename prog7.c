#include<stdio.h>

void printArray(int arr[], int size){

    for(int i=0; i<size; i++){
        printf("%d  ", arr[i]);

    }
    printf("\n");
}

void bubblesort(int arr[], int size){
    int temp;
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


int main(){

    int arr[]={4,6,1,8,34,5,8,34};
    int n=8;

    printArray(arr, n);
    bubblesort(arr, n);
    printArray(arr, n);
    return 0;
}