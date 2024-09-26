#include<stdio.h>
int queue[4],i,x,rear,front,opt;
int main(){
    front=-1;
    rear=-1;
    
    do{
        printf("1 for enqueue\n2for dequeue\n 3 for display\n");
        printf("enter the option:");
        scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        enqueue();
        break;
        case 2:
        dequeue();
        break;
        case 3:
        display();
        break;
        case 4:
        default:
        printf("invalid");
        
    }
}
while (opt!=0);
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

