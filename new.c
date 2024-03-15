#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};

void traverse(struct node* header){
    struct node* current=header;
    while (current!=NULL)
    {
        printf("%d",current->data);
        current=current->link;
    }
    
}

int main(){
    struct node* header=NULL;
    struct node* sec=NULL;
    struct node* third=NULL;

    header=(struct node*)malloc(sizeof(struct node));
    sec=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));


    header->data=3;
    header->link=sec;

    sec->data=6;
    sec->link=third;

    third->data=9;
    third->link=NULL;
     
     traverse(header);
}