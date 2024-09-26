#include<stdio.h>
int main()    
{
    FILE *fp=0;
    char ch[20]="Gireesh";
    fp=fopen("abc.txt","a+");
    if(fp==0)
    {
        printf("file is not opened:");
    }
    else{
        printf("file is opened:\n");
        fputs(ch,fp);
        rewind(fp);
        fgets(ch,15,fp);
        printf("\n%s",ch);

        fclose(fp);
    }
}