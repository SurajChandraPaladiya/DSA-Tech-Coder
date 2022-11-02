#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;

};

int linkedlist_traversal(struct node *ptr){

    while(ptr!=NULL){  
    printf("element= %d\n",ptr->data);
    ptr=ptr->next;
    }
}

int main(){

    //creating nodes 

    struct node* first;
    struct node* second;
    struct node* third;
    struct node* fourth;

    //allocating memory to nodes in heap

    first= (struct node*) malloc(sizeof(struct node));
    second= (struct node*) malloc(sizeof(struct node));
    third= (struct node*) malloc(sizeof(struct node));
    fourth= (struct node*) malloc(sizeof(struct node));

    //Inserting data to node first and linking to second node
    first->data=9;
    first->next=second;

    //Inserting data to node second and linking to third node
    second->data=34;
    second->next=third;

    //Inserting data to node third and linking to fourth node
    third->data=98;
    third->next=fourth;

    //Inserting data to node fourth and linking to fifth node
    fourth->data=28;
    fourth->next=NULL;

   

    linkedlist_traversal(first);

    return 0;
}