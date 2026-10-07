#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *createnode(){
    struct node *new;
    int choice;
    do{
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&new->data);
        if(head==NULL){
            head=tail=new;
            tail->next=head;
        }
        else{
            tail->next=new;
            tail=tail->next;
            tail->next=head;
        }
        printf("enter 1 for add more value");
        scanf("%d",&choice);
    }
    while(choice==1);
    return head;
};
void traverse(){
    struct node *temp=head;
    if(head==NULL){
        printf("list is empty");
    }
    else{
       do{
        printf("value is : %d\n", temp->data);
        temp = temp->next;
    }
    while(temp!=head);
    }
    }

int main(){
    createnode();
    traverse();
}