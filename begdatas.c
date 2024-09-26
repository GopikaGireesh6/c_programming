#include<stdio.h>
int main(){
    int size;
    int a[15];
    printf("enter the size:");
    scanf("%d",&size);
    printf("enter the elements:");
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=size-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=num;

    size++;
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }

    

}