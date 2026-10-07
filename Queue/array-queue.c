#include<stdio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
void enqueue(int x){//insertion in queue
    if(rear==max-1){
        printf("queue is full\n");
    }
    else if(front==-1&&rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear+=1;
        queue[rear]=x;
    }
}
void dequeue(){
    if(front==-1&&rear==-1){
        printf("queue is empty\n");
    }
    //if only one element left in queue and if we delete last element than front and rear  reset .
    else if(front==rear){
        printf("Deleted element is =  %d\n",queue[front]);
        front=rear=-1;
    }
    else{
        printf("deleted Element is = %d\n",queue[front]);
        front+=1;
    }
}
void display(){
    if(front==-1&&rear==-1){
        printf("queue is empty\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("Element is %d\n",queue[i]);
        }
    }
}
void peek(){
    if(front==-1&&rear==-1){
        printf("queue is empty\n");
    }
    else{
        printf("element is : %d\n",queue[front]);
    }
}
int main(){
    // in exam make menu driven program by using switch
    //time complexity
    enqueue(50);//o(1)
    enqueue(70);
    enqueue(60);
    enqueue(20);
    enqueue(10);

    
    dequeue();//o(1)
    display();//o(n)
    peek();//0(1)
    return 0;
}