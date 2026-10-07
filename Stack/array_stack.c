#include<stdio.h>
#define n 5 //macro for fixed size of stack here we have only 5 storage in stack
int stack[n];
int top=-1; //stack start from -1 index at initial
void push(){//push means add number to stack
    int x;
    printf("Enter value");
    scanf("%d",&x);
    if(top==n-1){
        printf("overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){//pop means remove number from stack
    int item;
    if(top==-1){
        printf("underflow\n");
    }
    else{
        item=stack[top];
        top--;
        printf("%d",item);
    }
}
void peek(){//looking at top of stack which element at top then print
    if(top==-1){
        printf("empty stack\n");
    }
    else{
        printf("Top Element %d\n",stack[top]);
    }
}
int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(){
    if(top==n-1){
        return 1;
    }
    else{
        return 0;
    }
}
void display(){
    int i;
    if(top==-1){
        printf("stack is empty\n");
    }
    else{
        printf("stack Element\n");

    }
    for( i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
int main(){
    int choice;
  do{
    printf("enter choice :1 push 2:pop 3:peek 4:display 0:exit\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:push();
    break;
    case 2:pop();
    break; 
    case 3:peek();
    break;
    case 4:display();
    break;
    default:printf("invalid choice\n");
    }
    }
    while(choice!=0);

      
}