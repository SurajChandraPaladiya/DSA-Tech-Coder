#include<stdio.h>
#include<stdlib.h>

struct node{
 
    int data;
    struct node *next;
};

struct node* deleteatfirst(struct node *head){

    struct node *ptr=head;
    head=head->next;
    free(ptr);

    return head;
}

struct node* deleteatindex(struct node *head, int index){

    struct node* p=head;
    int i=0;
    while(i!=index){

        p=p->next;
        i++;
    }

    struct node *q=p->next;
    p->next=q->next;
    free(q);
    return head;

}

struct node* deleteatend(struct node *head){

    struct node *p=head;

    while(p->next!=NULL){

        p=p->next;
    }

    struct node *q=head;
    while(q->next!=p){

        q=q->next;
    }

    q->next=NULL;

    free(p);

    return head;
}
int display( struct node *ptr){

    while(ptr!=NULL){

        printf("%d\t", ptr->data);
        ptr=ptr->next;
    }
}

struct node* deleteatnode(struct node *head, struct node *ptr){

    struct node *p=ptr->next;
    ptr->next=p->next;
    free(p);

    return head;
}

struct node* deleteatvalue(struct node *head, int value){

    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=value && q->next!=NULL){

        p=p->next;
        q=q->next;
    }
    if(q->data==value){

        p->next=q->next;
        free(q);
    }

    return head;
}

int main(){

    struct node *first; 
    struct node *second; 
    struct node *third; 
    struct node *fourth; 

    first= (struct node*) malloc(sizeof(struct node));
    second= (struct node*) malloc(sizeof(struct node));
    third= (struct node*) malloc(sizeof(struct node));
    fourth= (struct node*) malloc(sizeof(struct node));

    //first node
    first->data=8;
    first->next=second;

    //second node
    second->data=23;
    second->next=third;

    //third node
    third->data=45;
    third->next=fourth;

    //fourth node
    fourth->data=78;
    fourth->next=NULL;

    printf("Liked List before deletion\n");
    display(first);

    // first= deleteatnode(first, second);
    // first= deleteatvalue(first,78);
    first=deleteatfirst(first);

    printf("\nLiked List after deletion\n");
    display(first);
    return 0;
}