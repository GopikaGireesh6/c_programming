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
    int pos;
    printf("enter the position");
    scanf("%d",&pos);
    for(i=pos-1;i<size-1;i++)
    {
        a[i]=a[i+1];
    }

    size--;
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }

    

}