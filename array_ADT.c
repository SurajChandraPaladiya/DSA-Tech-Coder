#include<stdio.h>
#include<stdlib.h>

struct myArray{

    int total_size;
    int used_size;
    int *ptr;

};

void createArray( struct myArray *a, int tsize, int usize){


    // (*a).total_size=tsize;
    // (*a).used_size=usize;
    // (*a).ptr=(int *) malloc(tsize *sizeof(int));

    a->total_size=tsize; 
    a->used_size=usize;
    a->ptr=(int *) malloc(tsize *sizeof(int));
}

void show(struct myArray *a){

    for(int i=0; i< a->used_size; i++){

        printf("%d\n", (a->ptr)[i]);
    }
}

void setval(struct myArray *a){
    
    int n;
    printf("Enter the elements:\n");
    for(int i=0; i< a->used_size; i++){

        scanf("%d", &n);
        (a->ptr)[i]=n;
    }
}

int main(){

    struct myArray Marks;

    createArray(&Marks, 20, 5);
    printf("We are running setval:\n");
    setval(&Marks);
    printf("We are running show:\n");
    show(&Marks);

    return 0;

}