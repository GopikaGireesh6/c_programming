#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head=0,*newnode,*temp;
    int choice=1;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else{
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want node,0 for no node,1 for node:");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
   
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;

    }
    newnode->prev=temp;
    temp->next=newnode;


    temp=head;
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}