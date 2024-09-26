#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node *next;
        
    };
    
    struct node *head=0,*newnode,*temp;
    int choice=1;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
            newnode->next=head;
        }
        else{

            temp->next=newnode;
            newnode->next=head;
            temp=newnode;
        }
        printf("do you want node,0 for no node,1 for node:");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp->next!=head){
        printf("\n%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n%d",temp->data);
    int pos;
    printf("enter the position:");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    int i=1;
    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    temp=head;
    while(temp->next!=head){
        printf("\n%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n%d",temp->data);









    }