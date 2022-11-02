#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

void display(struct node *head)
{

    struct node *ptr = head;

    do
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}

struct node* insertatfirst( struct node *head, int data){

    struct node *ptr=(struct node*) malloc(sizeof(struct node));
    struct node *p=head;

    ptr->data=data;
    
    while(p->next!=head){

        p=p->next;
    }

    ptr->next=p->next;
    p->next=ptr;
    head=ptr;
    return head;

}

struct node* insertatindex( struct node *head, int data, int index){

    struct node *ptr=(struct node*) malloc(sizeof(struct node));
    struct node *p=head;
    ptr->data=data;

    int i=0;
    while(i!=index-1){

        p=p->next;
        i++;
    }

    ptr->next=p->next;
    p->next=ptr;

    return head;
}

struct node* insertatnode( struct node *head, int data, struct node *node){

    struct node *ptr=(struct node*) malloc(sizeof(struct node));
    struct node *p=head;
    ptr->data=data;

    while(p->next!=node){

        p=p->next;

    }
    ptr->next=p->next;
    p->next=ptr;

    return head;
}

int main()
{

    //creating nodes and allocating dynamic memory in heap
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    //insertng data into nodes
    first->data = 67;
    first->next = second;

    second->data = 78;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 45;
    fourth->next = first;

    printf("Circular linked list before insertion:\n");
    display(first);

    // first= insertatfirst(first, 23);
    // first= insertatindex(first, 23, 3);
    first= insertatnode(first, 23, third);

    printf("Circular linked list before insertion:\n");
    display(first);
    return 0;
}