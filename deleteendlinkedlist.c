#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head=0,*newnode,*temp,*prev;
    int choice=1;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else{
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
    temp=head;
    while(temp->next!=0){
        prev=temp;
        temp=temp->next;
    }
        prev->next=0;
        free(temp);
        temp=head;
        while(temp!=0){
            printf("\n%d",temp->data);
            temp=temp->next;
        }
        
}














    
