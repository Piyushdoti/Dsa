#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *createlist(){
    int choice;
   do{ 
    struct node *new =(struct node *)malloc(sizeof(struct node));
    printf("Enter data ");
    scanf("%d",&new->data);
    new->next=NULL;
    new->prev=NULL;
    if(head==NULL){
        head=tail=new;
    }
    else{
        tail->next=new;
        new->prev=tail;
        tail=new;
    }
    printf("Enter 1 for insert more value ");
    scanf("%d",&choice);
    }
    while(choice==1);
    return head;
};
void insertbeg(){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    printf("enter value to insert ");
    scanf("%d",&new->data);
    if(head==NULL){
        head=tail=new;
    }
    else{
        new->next=head;
        head->prev=new;
        head=new;
        
    }
}
void insertatend(){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    printf("enter value to insert ");
    scanf("%d",&new->data);
    new->prev=NULL;
    new->next=NULL;
    if(head==NULL){
        head=tail=new;
    }
    else{
        new->prev=tail;
        tail->next=new;
        tail=tail->next;
        
    }
}
void insertatpos(){
    int i,pos;
    int count=0;
    struct node *new,*temp=head;
    printf("enter position to insert");
    scanf("%d",&pos);
    while(temp!=NULL){
        count ++;
        temp=temp->next;
    }
if(pos<1||pos>count+1){
        printf("invalid position");
        return;
        }
    if(pos==1){
        insertbeg();
    }
    else if(pos==count+1){
        insertatend();
    }
    else{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter value to insert ");
    scanf("%d",&new->data);
    new->prev=NULL;
    new->next=NULL;
    }
    temp=head;
    for(i=1;i<pos-1;i++){
        temp=temp->next;
    }
    new->prev=temp;
    new->next=temp->next;
    temp->next=new;
    new->next->prev=new;
}
void insertafterpos(){
    int i,pos;
    int count=0;
    struct node *new,*temp=head;
    printf("enter position to insert after position ");
    scanf("%d",&pos);
    while(temp!=NULL){
        count ++;
        temp=temp->next;
    }
    if(pos<1||pos>count+1){
        printf("invalid position ");
        return;
        }
    if(pos==1){
        insertbeg();
    }
    else if(pos==count+1){
        insertatend();
    }
    else{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter value to insert ");
    scanf("%d",&new->data);
    new->prev=NULL;
    new->next=NULL;
    }
    temp=head;
    for(i=1;i<pos;i++){
        temp=temp->next;
    }
    new->prev=temp;
    new->next=temp->next;
    temp->next=new;
    new->next->prev=new;
}
void deleteatindex(){
    struct node *temp=head;
    int pos;
    printf("enter index");
    scanf("%d",&pos);
    int i=0;
    while(i!=pos){
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    printf("deleted element%d\n",temp->data);

    free(temp);
 
}

void deletebeg(){
    struct node *temp=head;
    if(head==NULL){
        printf("underflow\n");
        return;
    }
    else{
        head=head->next;
        free(temp);
    }
}

void reverse(){
    struct node *curr=head,*temp=head;
    while(temp!=NULL){
        temp=curr->next;
        curr->next=curr->prev;
        curr->prev=temp;
        curr=temp;
    }
    temp=head;
    head=tail;
    tail=temp;
    printf("list reverse successfully\n");
}


void traverse(struct node *ptr){
    while(ptr!=NULL){
        printf("Element is %d \n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    createlist();
    printf("original list\n");
    traverse(head);

    // deletebeg(head);
    // printf(" After delete from beginning\n");
    // traverse(head);

    // deleteatindex(head);
    // traverse(head);
    reverse(head);
    traverse(head);

}