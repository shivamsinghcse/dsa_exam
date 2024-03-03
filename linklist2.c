//cicular linklist
 #include<stdio.h>
 #include<stdlib.h>
 
 struct node
 {
    /* data */
    int data;
    struct node* next;
 };
 
 void traverse(struct node* head){
    struct node* current = head;
    printf("%d \n", current->data);
        current = current->next;
    while (current!=head)
    {
        printf("%d \n", current->data);
        current = current->next;
    }
    
 }
 int main(){
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data = 3;
    third->next= head;

    traverse(head);

    free(head);
    free(second);
    free(third);
 }