#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;

};

void display(struct node *head){

    while(head!=NULL){

        printf("%d\t", (*head).data);
        head=(*head).next;
    }
    printf("\n");
}

struct node* insertatfirst(struct node* head, int data){

    struct node *ptr= (struct node*) malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;

    return ptr;
}

struct node* insertafterindex(struct node* head, int data, int index){

    struct node *ptr= (struct node*) malloc(sizeof(struct node));
    ptr->data=data;

    struct node *p=head;
    for(int i=0; i<index; i++){
       p=p->next; 
    }
    ptr->next=p->next;
    p->next=ptr;

    return head;
}

int main(){

// creating node and assining memory in heap
struct node *first= (struct node*) malloc(sizeof(struct node));
struct node *second= (struct node*) malloc(sizeof(struct node));
struct node *third= (struct node*) malloc(sizeof(struct node));
struct node *fourth= (struct node*) malloc(sizeof(struct node));

// entering data in nodes

    first->data=89;
    (*first).next=second;

    (*second).data=34;
    (*second).next=third;

    (*third).data=67;
    (*third).next=fourth;

    (*fourth).data=89;
    (*fourth).next=NULL;

    printf("Linked List before insertion:\n ");
    display(first);

    first=insertafterindex(first, 78, 2);
    
    printf("Linked List before insertion:\n ");
    display(first);

}