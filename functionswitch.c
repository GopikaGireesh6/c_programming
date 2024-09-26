#include<stdio.h>
#include<stdlib.h>
void display();
void beginsert();
void enddelete();
void posdelete();


    struct node{
        int data;
        struct node *next;
    };
    struct node *head=0,*newnode,*temp,*prev;
    int main()
{
    int choice=1;
    int option;
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

    do{
    printf("1 for display 2 for beginsert 3 for posdelete 4 for enddelete 5 for endinsert 6 for posinsert:  ");
    scanf("%d",&option);
    switch(option){
    case 1:
    display();
    break;
    case 2:
    beginsert();
    break;
    case 3:
    posdelete();
    break;
    case 4:
    enddelete();
    break;
    case 5:
    endinsert();
    break;
    case 6:
    posinsert();
    break;
    default:
    printf("error");
    }
    }
    while(option!=0);
}
    void display()
    {
    temp=head;
    while(temp!=0){
        printf("\n%d\n\t",temp->data);
        temp=temp->next;
    }
    }
    void beginsert(){
        temp=head;
     newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&newnode->data);

    newnode->next=head;
    head=newnode;
    }
    void enddelete()
    {
        
        temp=head;
    while(temp->next!=0){
        prev=temp;
        temp=temp->next;
    }
        prev->next=0;
        free(temp);
    }
    void posdelete()
    {
        temp=head;
        int pos;
    printf("enter the position:");
    scanf("%d",&pos);
    int i=1;
    temp=head;
    while(i<pos){

        prev=temp;
        temp=temp->next;
        i++;
    }
    prev->next=temp->next;
    free(temp);

    }
    void endinsert(){
        temp=head;
        newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=newnode;
    
    } 
    void posinsert()
    {
        temp=head;
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

}

    





