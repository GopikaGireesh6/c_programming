#include<stdio.h>
int main(){
    int reminder=0,number,result=0,q;
    printf("enter the number:\n");
    scanf("%d",&number);
    q=number;
    while(q!=0)
    {
    reminder=q%10;
    result=result*10+reminder;
    q=q/10;
    }
    if(result==number)
{
    printf("the number %d is palindrome\n",result);

}
else{
    printf("%d is not palindrome",number);
}
return 0;
}