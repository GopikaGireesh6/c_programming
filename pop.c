#include<stdio.h>
int stack[4],i,x,top;
int main(){
    top=-1;
    push();
    push();
    push();
    push();
    display();
    push();
    pop();
    pop();
    pop();
    pop();
    display();
    pop();
    }
void push(){
    if(top==3){
        printf("overflow");

    }
    else{
        printf("enter the data:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void display(){
    for(i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
void pop(){
    if(top==-1){
        printf("underflow");

    }
    else{
        int x=stack[top];
        printf("\n%d popped elementd",x);
        top--;
    }
}