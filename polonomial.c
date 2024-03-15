#include<stdio.h>
#include<stdlib.h>
struct node{
    int cofficent;
    int exponents;
    struct node* next;
};
void add(struct node* head,struct node* head2){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        }
        
    }
    
}

int main(){
    struct node* head2;
    struct node* sec2;
    struct node* third2;

    head2=(struct node*)malloc(sizeof(struct node));
    sec2=(struct node*)malloc(sizeof(struct node));
    third2=(struct node*)malloc(sizeof(struct node));

    head2->cofficent=3;
    head2->exponents-2;
    head2->next=sec2;

    sec2->cofficent=2;
    sec2->exponents-1;
    sec2->next=third2;

    third2->cofficent=1;
    third2->exponents=0;
    third2->next=NULL;






    struct node* head2;
    struct node* sec2;
    struct node* third2;

    head2=(struct node*)malloc(sizeof(struct node));
    sec2=(struct node*)malloc(sizeof(struct node));
    third2=(struct node*)malloc(sizeof(struct node));

    head2->cofficent=3;
    head2->exponents-2;
    head2->next=sec2;

    sec2->cofficent=2;
    sec2->exponents-1;
    sec2->next=third2;

    third2->cofficent=1;
    third2->exponents=0;
    third2->next=NULL;
    
}