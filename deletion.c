//C PROGRAM FOR DELETION IN AN ARRAY
#include<stdio.h>

void deletion( int arr[], int size){

    int del;
    printf("Enter the index of the element you want to delete:\n");
    scanf("%d", &del);

    for (int i = del; i < size; i++)
    {
       arr[i]=arr[i+1];
    }

}

void printarray(int arr[], int size){


    for (int  i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int main(){

    int arr[10]={45,67,8,5,3};
    int n=5;
    printf("Array Before deletion:\n");
    printarray(arr, n);
    
    deletion(arr, n);
    n-=1;
    printf("Array After deletion:\n"); 
    printarray(arr, n);
    return 0;
}