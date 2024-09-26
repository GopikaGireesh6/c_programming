#include<stdio.h>
struct node{
    int *data;
    struct node*next;
};
 struct node *front=0,*rear,*temp,*newnode;
int main(){
   
    int opt;
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
        default:
        break;
  }
}
while(opt!=0);
}
void enqueue(){
    newnode = (struct node*)malloc(sizeof(struct node));
    int x;
    printf("enter the elements\n:");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=0;
    if(front==0){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue(){
    if(front==0||rear==0){
        printf("unde flow");
    }
    else{
        temp=front;
        front=front->next;
        free(temp);
    }
}
void display(){
    temp=front;
    while(temp!=0){
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}