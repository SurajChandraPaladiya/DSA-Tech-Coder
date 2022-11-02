#include <stdio.h>
#include <stdlib.h>
struct node *top;

struct node
{

    int data;
    struct node *next;
};

int display(struct node *ptr)
{

    while (ptr != NULL)
    {

        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

int isFull()
{

    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct node *top)
{

    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top, int data)
{

    if (isFull())
    {
        printf("Stack overflow\n");
    }

    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = data;
        n->next = top;
        top = n;

        return top;
    }
}

int pop(struct node *tp)
{

    if (isEmpty(tp))
    {
        printf("Stack underflow\n");
    }

    else
    {
        struct node *p = tp;
        top = p->next;
        int x = p->data;
        free(p);

        return x;
    }
}

int main()
{

    top = push(top, 45);
    top = push(top, 6);
    top = push(top, 8);
    display(top);
    printf("Popped %d element\n", pop(top));
    display(top);

    return 0;
}