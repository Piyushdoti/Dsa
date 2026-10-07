#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;//here head=top
// void isempty(){
//     return top==NULL;
// }
void push(int value){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL){
        printf("heap overflow\n");
        return;
    }
    new->data=value;
    new->next=top;
    top=new;
    printf("push into stack %d\n",value);
}
void pop(){
    if(top==NULL){
        printf("stack id empty \n");
    }
    else{
        struct node *del=top;
        printf("deleted value %d\n",del->data);
        top=top->next;
        free(del);

    }
}
    void peek(){
        if(top==NULL){
            printf("stack is empty \n");
        }
        else{
            printf(" top Element is %d\n",top->data);
        }
    } 
    void display(){
        if(top==NULL){
        printf("stack is empty \n");
        }
        else{
            struct node *temp=top;
            while(temp!=NULL){
                printf("Element is %d\n ",temp->data);
                temp=temp->next;
            }
        }
}
int main(){
     push(50);
     push(39);
     push(10);
     display();
     pop();
     push(39);
     pop();
     display();

}