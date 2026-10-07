#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *temp;
struct node *head=NULL;
int choice;
struct node *createlist(){
 do{   struct node *new=(struct node*)malloc(sizeof(struct node));
    printf("enter value ");
    scanf("%d",&new->data);
    new->next=NULL;
    if(head==NULL){
        head=temp=new;
    }
    else{
        temp->next=new;
        temp=temp->next;
    }
    printf("press 1 for insert new value ");
    scanf("%d",&choice);
 }while(choice==1);
     return head;
};

void insertbeg(){
    // struct node *temp=head;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    printf("Enter value to insert at begining ");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
}
void insertend(){
    struct node *temp=head;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    printf("Enter value to insert at end ");
    scanf("%d",&new->data);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    new->next=NULL;
    temp->next=new;
    
}
void insertindex(){
    struct node *temp=head;
    int p;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    printf("Enter value to insert at index ");
    scanf("%d",&new->data);
    printf("enter index to place ");
    scanf("%d",&p);
    for(int i=1;i<p-1;i++){
        temp=temp->next;
    }
    new->next=temp->next;
    temp->next=new;
    
}
     void deletebeg(){
         struct node *temp=head;
         if(head==NULL){
             printf("list is empty");
             return;
         }
         if(head->next==NULL){
             head=0;
             free(temp);
         }
         head=head->next;
         free(temp);
     }
void deleteend(){
    struct node *p=head;
    struct node *temp=head->next;
    if(head==NULL){
        printf("empty list");
        return;
    }
    if(head->next==NULL){
        head=0;
        free(temp);
    }
    while(temp->next!=NULL){
        temp=temp->next;
        p=p->next;
    }
    p->next=NULL;
    free(temp);
}
void deleteindex(){
    int pos;
    struct node *p=head,*temp=head->next;
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        head=0;
        free(temp);
        return;
    }
    printf("enter position to remove\n");
    scanf("%d",&pos);
    if(pos==1){
        deletebeg();
        return;
    }
    else{
        for(int i=1;i<pos;i++){
            temp=temp->next;
            p=p->next;
        }
        p->next=temp->next;
        free(temp);
    }
    
    
}
void deletebeforeindex(){
    int pos;
    struct node *p,*temp=head;
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        head=0;
        free(temp);
        return;
    }
    printf("enter position to remove\n");
    scanf("%d",&pos);
        for(int i=1;i<pos-1;i++){
            p=temp;
            temp=temp->next;
        }
        p->next=temp->next;
        free(temp);
    
}
void reverse(){
    struct node *curr,*prev,*nextnode;
    prev=NULL;
    curr=nextnode=head;
    while(nextnode!=NULL){
        nextnode=nextnode->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    head=prev;
}



void displaylist(struct node *ptr){
    while(ptr!=NULL){
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    createlist();
    printf("original list\n");
    displaylist(head);
    // insertbeg(head);
    // displaylist(head);
    // insertindex(head);
    // displaylist(head);
    // deletebeg(head);
    // printf("updated list\n");
    // displaylist(head);
    // deleteend(head);
    // printf("new list\n");
    // displaylist(head);
    // deleteindex(head);
    // printf("new list\n");
    // displaylist(head);
    // deletebeforeindex(head);
    // printf("new list\n");
    // displaylist(head);
       reverse();
       printf("reverselist\n");
       displaylist(head);

}