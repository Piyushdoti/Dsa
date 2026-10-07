#include<stdio.h>
#include<stdlib.h>
struct node{
    int coeff;
    int pow;
    struct node *next;
};
struct node *head=NULL;
struct node *createnode(){
    int choice;
    struct node *new,*temp=NULL;
do{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter coeff");
    scanf("%d",&new->coeff);
    printf("enter pow");
    scanf("%d",&new->pow);
    new->next=NULL;
    if(temp==head){
        head=temp=new;
    }
    else{
        temp->next=new;
        temp=new;
    }
    printf("enter value");
    scanf("%d",&choice);
    }
    while(choice==1);
    return head;

};