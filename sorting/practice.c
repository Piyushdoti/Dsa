#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp=NULL;
void createnode(){
    int choice;
  do{ struct node *new=(struct node*)malloc(sizeof(struct node));
    printf("Enter value");
    scanf("%d",&new->data);
    new->next=NULL;
    if(head==NULL){
        head=temp=new;
    }
    else{
        temp->next=new;
        temp=temp->next;
    }
    printf("press 1 for enter more no");
    scanf("%d",&choice);
  }while(choice==1);
}
void traverse(){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    createnode();
    traverse();
}