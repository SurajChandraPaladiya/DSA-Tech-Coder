#include <stdio.h>

int linear_search(int arr[],int n, int element){

int i=0;
    for(i=0; i<=n; i++){

        if(arr[i]==element){

            return i;
        }
    }
      
      return -1;
}
 
int main()
{
    int arr[]={5,6,2,5,6,78,45,9,56,34,23};
    int n=sizeof(arr)/sizeof(int);
    int element;

    printf("Enter the element you want to search for:\n");
    scanf("%d", &element);
     
    
    int index=linear_search(arr, n, element);
    if(index>-1){
    printf("we found the element %d at the index %d\n", element, index);
    }

    else {
        printf("The element %d is not present in the array\n", element);
    }
    return 0;
}