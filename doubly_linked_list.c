#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *pre;
};
void display(struct node *head){

    struct node *p=head;

    printf("\nLinked List In forward: \n");
    while(p!=NULL){ 

        printf("%d\t",  p->data);
        p=p->next;

    }
    // printf("\nLinked List In Reverse: ");
    
    // p=p->pre;
    // printf("%d\t",  p->data);

    // // p=p->pre;  
    // //     for (; p!=NULL; ){
    // //         printf("%d", p->data);
    // //         p=p->pre;
    // //     };
    
}

struct node* insertatfirst(struct node* head, int data){

    struct node*  ptr= (struct node*) malloc(sizeof(struct node*));
    struct node *p=head;
    ptr->data=data;
    ptr->pre=NULL;

    p->pre=ptr;
    ptr->next=p;

    head=ptr;

    return head;


}
int main(){

    struct node *head, *second, *third;

    head= (struct node*) malloc( sizeof( struct node*));
    second= (struct node*) malloc( sizeof( struct node*));
    third= (struct node*) malloc( sizeof( struct node*));

    head->data= 67;
    head->pre=NULL;
    head->next=second;

    second->data= 43;
    second->pre=head;
    second->next=third;

    third->data= 98;
    third->pre=second;
    third->next=NULL;

    display(head);
    head=insertatfirst(head, 56);
    head=insertatfirst(head, 4);
    head=insertatfirst(head, 41);
    display(head);

}