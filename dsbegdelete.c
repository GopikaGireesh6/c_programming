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
        printf("%d\t",a[i]);
    }
    
    for(i=0;i<size-1;i++)
    {
        a[i]=a[i+1];
    }

    size--;
    for(i=0;i<size;i++)
    {
        printf("\n%d\t",a[i]);
    }

    

}