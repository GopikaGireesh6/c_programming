#include<stdio.h>
int main(){
    int n,i;
    long x,y,z;
    x=0;
    y=1;
    printf("enter the numbers of terms:");
    scanf("%d",&n);
    printf("%d\n",y);
    for(i=1;i<=n;i++){
       z=x+y;
       printf("%d\n",z);
       x=y;
       y=z;

    }
}