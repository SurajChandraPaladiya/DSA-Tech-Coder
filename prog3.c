#include<stdio.h>
#include<stdlib.h>

struct node {

    int data;
    struct node *prev;
    struct node *next;

};

void display(struct node* head){

    struct node *ptr=head;
    printf("forward:\n");
        do{
        printf("%d\t", ptr->data);
        ptr=ptr->next;
        }while(ptr->next!=NULL);
    printf("%d\n", ptr->data);

    printf("Backward:\n");
    
       do {
        printf("%d\t", ptr->data);
        ptr=ptr->prev;
        }while(ptr!=NULL);
    printf("\n\n");
}

struct node* insertatend(struct node *head, int data){
    struct node* ptr=(struct node*) malloc(sizeof(struct node));
    struct node* p=head;
    ptr->data=data;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->prev=p;

    return head;
}
int main(){

    //creating nodes 
    struct node *head, *second, *third, *fourth;

    //allocating dynamic memory in heap
    head= (struct node*) malloc (sizeof(struct node));
    second= (struct node*) malloc (sizeof(struct node));
    third= (struct node*) malloc (sizeof(struct node));
    fourth= (struct node*) malloc (sizeof(struct node));

    head->data=23;
    head->prev=NULL;
    head->next=second;

    second->data=98;
    second->prev=head;
    second->next=third;

    third->data=54;
    third->prev=second;
    third->next=fourth;

    fourth->data=78;
    fourth->prev=third;
    fourth->next=NULL;

    printf("Linked List before insertion:\n");
    display(head);

    head= insertatend(head, 21);
    head= insertatend(head, 5);

    printf("Linked List after insertion:\n");
    display(head);
    return 0;
}
