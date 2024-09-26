#include<stdio.h>
int queue[5],x,front,rear;
int main(){
    front=-1;
    rear=-1;
    display();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    
}
void enqueue(){
    if(rear==4) 
    {
        printf("overflow");

    }
    else if(front==-1&&rear==-1){
    printf("\nenter the elements:");
    scanf("%d",&x);
    front=rear=0;
    queue[rear]=x;
    }
    else{
    printf("\nenter the elements:");
    scanf("%d",&x);
    rear++;
    queue[rear]=x;
}
}
void dequeue(){
    if(front==-1&&rear==-1)
    
    {
        printf("\nunder flow");
    }
    else if(front==rear){
        printf("\ndequeue element is %d",queue[front]);
        front=rear=-1;
    }
    else{
        printf("\ndequeue element is %d",queue[front]);
        front++;
    }
}
void display(){
    if(front==-1&&rear==-1){
        printf("\nempty");
    }
    else{
    for(int i=front;i<=rear;i++){
        printf("%d",queue[i]);
    }
    }
}
