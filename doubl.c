#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* prev;
    int data;
    struct node* next;
};


int main(){
    struct node* head;
    struct node* sec;
    struct node* third;

    head=(struct node*)malloc(sizeof(struct node));
    sec=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=1;
    head->next=sec;
   
     sec->prev=head;
    sec->data=2;
    sec->next=third;
   
    third->prev=sec;
    third->data=3;
    third->next=NULL;
   


}