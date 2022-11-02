#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;

};

int linkedlist_traversal(struct node *ptr){
    
    while(ptr!=NULL){
    printf("%d\t",ptr->data);
    ptr=ptr->next;
    }
}

struct node* insert(struct node *head, int data, int index){

    struct node *ptr= (struct node*) malloc(sizeof(struct node));
    ptr->data=data;

    struct node *p=head;
    int i=0;
    while(i!=index-1){

        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;

    return head;
}

int main(){

    //creating nodes 

    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    //allocating memory to nodes in heap

    first= (struct node*) malloc(sizeof(struct node));
    second= (struct node*) malloc(sizeof(struct node));
    third= (struct node*) malloc(sizeof(struct node));
    fourth= (struct node*) malloc(sizeof(struct node));
    fifth= (struct node*) malloc(sizeof(struct node));

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
    fourth->next=fifth;

    //Inserting data to node fifth and linking to next node
    fifth->data=100;
    fifth->next=NULL;

    printf("Linked list before insertion:\n");
    linkedlist_traversal(first);

    first= insert(first, 78, 3);

    printf("\nLinked list after insertion:\n");
    linkedlist_traversal(first);

    return 0;
}
