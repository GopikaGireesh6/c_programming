#include<stdio.h>
// function without argument and return value
 void sum();/*function declaration*/
int main(){

    sum(); /*function call*/
}
void sum(){ /*function definition*/
    int c=5,d=6;
    int sum;
    sum=c+d;
    printf("sum=%d",sum);
}