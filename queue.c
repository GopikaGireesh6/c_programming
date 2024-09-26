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
    
}
void enqueue(){
    if(rear==4) 
    {
        printf("overflow");

    }
    else if(front==-1&&rear==-1){
    printf("enter the elements:");
    scanf("%d",&x);
    front=rear=0;
    queue[rear]=x;
    }
    else{
    printf("enter the elements:");
    scanf("%d",&x);
    rear++;
    queue[rear]=x;
}
}
void display(){
    if(front==-1&&rear==-1){
        printf("empty");
    }
    else{
    for(int i=front;i<=rear;i++){
        printf("%d",queue[i]);
    }
    }
}
