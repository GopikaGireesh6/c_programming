#include<stdio.h>
int queue[4],i,x,front,rear;
int N=4;
int main(){
    front=-1;
    rear=-1;
    int opt;
    do{
        printf("1 for enqueue  2 for dequeue  3 for display");
        printf("enter the option: ");
        scanf("%d",&opt);
        switch(opt){
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
    while(opt!=0);
}
void enqueue(){
    if(front==-1&&rear==-1){
        printf("\nenter the element:");
        scanf("%d",&x);
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%N==front){
        printf("data overflow");

    }
    else{
        printf("enter the element:");
        scanf("%d",&x);
        rear=(rear+1)%N;
        queue[rear]=x;
    }

}
void dequeue(){
    if(front==-1&&rear==-1){
        printf("undeflow");
    }
    else if(front==rear)
    {
        printf("\nthe dequeue element is%d",queue[rear]);
        front=rear=-1;
    }
    else{
        printf("\nthe dequeue element is %d",queue[front]);
        front=(front+1)%N;
    }
}
void display()
{
    i=front;
    while(i!=rear){
        printf("\nthe element is %d",queue[i]);
    i=(i+1)%N ;
    }
    printf("\n elenent is %d",queue[rear]);
}

