#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
void enqueue(int x){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=x;
    new->next=NULL;
    if(front==NULL&&rear==NULL){
        front=rear=new;
        rear->next=front;
    }
    else{
        rear->next=new;
        rear=new;
        rear->next=front;
    }
}
void dequeue(){
    struct node *temp;
    if(front==NULL&&rear==NULL){
      printf("underflow");
    }
    else if(front==rear){
        temp=front;
        front=rear=NULL;
        free(temp);
    }
    else{
        temp=front;
        printf("deleted element is %d\n",temp->data);
        front=front->next;
        rear->next=front;
        free(temp);
    }
}
void display(){
    struct node *temp=front;
    if(front==NULL&&rear==NULL){
        printf("queue is empty\n");
    }
    else{
        while(temp->next!=front){
            printf("Element is %d\n",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}
void peek(){
    if(front==NULL&&rear==NULL){
        printf("queue is empty\n");
    }
    else{
        printf("Element is %d",front->data);
    }
}
int main(){
    enqueue(50);
    enqueue(90);
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();
    display();
    peek();
}