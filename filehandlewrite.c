#include<stdio.h>
int main()    
{
    FILE *fp=0;
    char s[20]="embeddedsystems";
    fp=fopen("abc.txt","w");
    if(fp==0)
    {
        printf("file is not opened:");
    }
    else{
        printf("file is opened:\n");
        fputs(s,fp);
        fclose(fp);
    }
}