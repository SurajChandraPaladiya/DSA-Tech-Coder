#include <stdio.h>
#include <stdlib.h>

struct node
{   `
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;

    return ptr;
}
int main()
{
    // creating node

    struct node *root, *A, *B, *C, *D, *E, *F;

    root = createnode(29);
    A = createnode(25);
    B = createnode(35);
    C = createnode(22);
    D = createnode(24);
    E = createnode(30);
    F = createnode(40);

    root->left = A;
    root->right = B;

    A->left = C;
    A->right = D;

    B->left = E;
    B->right = F;

    printf("Binary tree created\n");
    return 0;
}