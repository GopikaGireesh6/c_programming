#include<stdio.h>
int inputstring(char [],int);
int main(){
    char str[100];
    int n;
    printf("enter the string:");
    scanf("%s",str);
    printf("enter the no of character to print:");
    scanf("%d",&n);
    n=inputstring(str,n);
    printf("%s\n%d",str,n);


}
int inputstring(char str[],int n)
{

int ch,i;
i=0;
while((ch=getchar()=='\0'))
{
if(i<n){
    str[i++]=ch;
}

}
str[i]='\0';
return i;
}