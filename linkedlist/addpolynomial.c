#include<stdio.h>
#include<stdlib.h>
struct node{
    int coeff;
    int pow;
    struct node *next;
};
struct node *head=NULL;
struct node *createnode(int c,int p){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->next=NULL;
}
struct node *addpolynomial(struct node *head1,struct node *head2){
    struct node *dummy=createnode(0,0);
    struct node *temp3;
    struct node *temp1=head1;
    struct node *temp2=head2;
    while(temp1!=NULL&&temp2!=NULL){
        if(temp1->pow<temp2->pow){
            temp3->next=temp2;
            temp2=temp2->next;
        }
        else if(temp1->pow>temp2->pow){
               temp3->next=temp1;
               temp1=temp1->next;
        }
        else{
            temp1=temp1->coeff+temp2->coeff;
            temp3->next=temp1;
            temp1=temp1->next;
        }
    }
    if(temp1!=NULL){
        temp3->next=temp1;
    }
    if(temp2!=NULL){
        temp3->next=temp2;
    }


};