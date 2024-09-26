#include<stdio.h>
int main(){
    int num1,num2;
    char choice;
    
    printf("+for addition\n-for substraction\n*for division\n/for division:");
    printf("enter thr choice:");
    scanf("%c",&choice);
    printf("enter the values:");
    scanf("%d%d",&num1,&num2);
    switch(choice)
    {
        case '+':
        printf("%d",num1+num2);
        break;
        case '-':
        printf("%d",num1-num2);
        break;
        case '*':
        printf("%d",num1*num2);
        break;
        case '/':
        printf("%d",num1/num2);
        break;
        default:
        printf("error");
        
    }
}
        
    

