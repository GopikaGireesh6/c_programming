#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=0;
    char ch;
    char str[20]="evolverobotics";
    fp=fopen("a.txt","w+");
    fputs(str,fp);
     ch=fgets(ch,15,fp);
    printf("%s",ch);
}
