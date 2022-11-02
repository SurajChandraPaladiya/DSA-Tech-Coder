#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};

void display(struct node *head){

    while(head!=NULL){

        printf("%d\t", head->data);
        head=head->next;
    }
    printf("\n");
}

struct node* deleteatfirst(struct node *head){

    struct node *p=head;
    head=p->next;
    free(p);

    return head;
}


int main(){

    //creating node and assigning memory in heap
    struct node *first= (struct node*) malloc(sizeof(struct node));
    struct node *second= (struct node*) malloc(sizeof(struct node));
    struct node *third= (struct node*) malloc(sizeof(struct node));
    struct node *fourth= (struct node*) malloc(sizeof(struct node));

    //inserting data into nodes
    (*first).data=56;
    (*first).next=second;

    (*second).data=67;
    (*second).next=third;

    (*third).data=98;
    (*third).next=fourth;

    (*fourth).data=34;
    (*fourth).next=NULL;

    printf("Linked list before deleting node:\n");
    display(first);

    first= deleteatfirst(first);
    first= deleteatfirst(first);
    first= deleteatfirst(first);
    first= deleteatfirst(first);
    printf("Linked list before deleting node:\n");
    display(first);



    return 0;
}