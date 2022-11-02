#include<stdio.h>
#include<stdlib.h>

struct stack{

    int size;
    int top;
    int *arr;

};

void display(struct stack *ptr){

    printf("The elements of the stack:\n");
    for(int i=0; i<=ptr->top; i++){
        printf("%d\t", ptr->arr[i]);
    }
    printf("\n");
}

int isEmpty(struct stack *ptr){

    if(ptr->top== -1){
        return -1;
    }

    else {

        return 0;
    }
}

int isFull(struct stack *ptr){

    if(ptr->top == ptr->size-1){

        return 1;
    }
    else{
        return 0;
    }
}

void push( struct stack * ptr, int val){

        if(isFull(ptr)){  
        printf("Stack is Overflow, cannot push the element %d in the stack\n", val);
    }
    else{

       ptr->top=ptr->top+1;
       ptr->arr[ptr->top]=val;
    }
} 

int pop( struct stack *ptr ){

int value;
 if(isEmpty(ptr)){

        printf("stack is underflow..!\n");
    }
    else{

        value= ptr->arr[ptr->top];
        ptr->top=ptr->top-1;

        return printf("The poped value is %d\n", value);
    }

}
int main(){

    struct stack *s=  (struct stack*) malloc(sizeof(struct stack));

    s->size=10;
    s->top=-1;
    s->arr= (int*) malloc(s->size * sizeof(int));

    printf("Before pushing,  full= %d\n", isFull(s));
    printf("Before pushing,  empty= %d\n", isEmpty(s));
    push(s, 89);
    push(s, 49);
    push(s, 56);
    push(s, 56);
    push(s, 56);
    push(s, 56);
    push(s, 56);
    push(s, 56);
    push(s, 56);
    push(s, 56);
    push(s, 35);
    printf("After pushing,  full= %d\n", isFull(s));
    printf("After pushing,  empty= %d\n", isEmpty(s));
    display(s);

     printf("Before poping,  full= %d\n", isFull(s));
    printf("Before poping,  empty= %d\n", isEmpty(s));

    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    
     printf("after poping,  full= %d\n", isFull(s));
    printf("after poping,  empty= %d\n", isEmpty(s));
    display(s);
    return 0;
}
