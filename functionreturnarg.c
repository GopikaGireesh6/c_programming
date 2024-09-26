#include<stdio.h>
//function with argument and return value
int sum(int,int);/*function declaration*/
int main(){
    int a,b;
    printf("enter the numbers:");
    scanf("%d%d",&a,&b);/*function call*/
    int s=sum(a,b);
    printf("sum of %d and %d=%d",a,b,s);
}
int sum(int c,int d){  /*function definition*/
    int sum;
    sum=c+d;
    return sum;
}
