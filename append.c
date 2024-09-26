#include<stdio.h>
int main()    
{
    FILE *fp=0;
    
    fp=fopen("abc.txt","a");
    if(fp==0)
    {
        printf("file is not opened:");
    }
    else{
        printf("file is opened:\n");
        fputs('s',fp);
        fclose(fp);
    }
}