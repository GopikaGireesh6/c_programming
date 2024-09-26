#include<stdio.h>
#include<stdlib.h>
struct node *create();
void postorder();

struct node{
    int data;
    struct node *left;
    struct node *right;
   
};
void main()
{
    struct node *root;
    root = create();
    postorder(root);
}
struct node *create()
{
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data / press -1 no node:");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    else{
        newnode->data =x;
        printf(" enter left child of %d",x);
        newnode->left=create();
        printf("enter the right child of %d",x);
        newnode->right=create();
        return newnode;
    }
   
}
void postorder(struct node *root){
    if(root==0){
        return;
    }
    else{
        
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
        return;

    }
}