#include<stdio.h>
//function without argument with return value
int sum(); /*function declaration*/
int main(){
    int s;
    
    s=sum(); /*function call*/
    printf("sum=%d",s);

}
int sum(){ /*function definition*/
    int sum,a,b;
    printf("enter the numbers to be added:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
}