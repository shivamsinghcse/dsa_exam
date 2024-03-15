#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void traverse(struct node* first)
{
    struct node* current= first;
    while (current!=NULL)
    {
        printf("%d\n",current->data);
        current=current->next;
    }
    
}
int main()
{
    // creating new nodes
    struct node *first = NULL;
    struct node *secound = NULL;
    struct node *third = NULL;

    // define the size of each node
    first = (struct node *)malloc(sizeof(struct node));
    secound = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // input the values in the linklist
    first->data = 1;
    first->next = secound;

    secound->data = 2;
    secound->next = third;

    third->data = 3;
    third->next = NULL;
    traverse(first);
}