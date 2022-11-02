#include<stdio.h>
#include<stdlib.h>

struct stack{

    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){

    if(ptr->top == -1){
        return printf("Stack is Empty..!\n");
    }

    else {
        return printf("Stack is not Empty..!\n");
    }
}

int isFull( struct stack *ptr){

    if(ptr->top == ptr->size-1){

        return printf("Stack is Full..!!\n");
    }

    else{
        return printf("Stack is not Full..!!\n");
    }
}
int main(){

    struct stack *s;

    s->size=5;
    s->top=-1;
    s->arr= (int*) malloc(s->size * sizeof(int));

    printf("Stack is impplemented successfully\n");

    isEmpty(s);

    isFull(s);
        return 0;
}