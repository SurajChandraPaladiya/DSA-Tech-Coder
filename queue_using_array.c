#include<stdio.h>
#include<stdlib.h>

struct queue{

    int size;
    int r;
    int f;
    int *arr;
};

int isfull(struct queue *ptr){

    if(ptr->r==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(struct queue *ptr){

    if(ptr->r==ptr->f){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue( struct queue *ptr, int val){
    if(isfull(ptr)){
        printf("Stack if full, can't enqueue element %d \n", val);
    }

    else{
        ptr->r=ptr->r+1;
        ptr->arr[ptr->r]=val;
    }
}

int  dequeue( struct queue *ptr){
    int a=-1;
    if(isempty(ptr)){
        printf("Stack if empty\n");
    }

    else{
        ptr->f++;
        a=ptr->arr[ptr->f];
    }
    return a;
}
 
void printqueue(struct queue *ptr){

    for(int i=ptr->f+1; i<=ptr->r; i++){
        printf("%d\t", ptr->arr[i]);
    }
    printf("\n");
}

int main(){

    struct queue q;
    q.size=2;
    q.r=q.f=-1;
    q.arr= (int*)malloc(q.size*sizeof(int));

    enqueue(&q, 34);
    enqueue(&q, 5);
    enqueue(&q, 5);
    printf("Elements of queue\n");
    printqueue(&q);
    // isempty(&q);
    // printf("element %d is dequeue\n", dequeue(&q));
    // printf("element %d is dequeue\n", dequeue(&q));
    // if(isempty(&q)){
    //     printf("empty");
    // }
    // isfull(&q);
    
}