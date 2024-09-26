#include<stdio.h>
int main()    
{
    FILE *fp=0;

    char ch;
    fp=fopen("abc.txt","r");
    if(fp==0)
    {
        printf("file is not opened:");
    }
    else{
        printf("file is opened:\n");
        while(!feof(fp))
        {
             ch=fgetc(fp);
            printf("%c",ch);
        }
        fclose(fp);
    }
}