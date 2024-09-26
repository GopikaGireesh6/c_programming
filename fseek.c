#include<stdio.h>
int main()    
{
    FILE *fp=0;
    char ch[20]="Gireesh";
    fp=fopen("abc.txt","r+");
    if(fp==0)
    {
        printf("file is not opened:");
    }
    else{
        printf("file is opened:\n");
        fseek(fp,5,SEEK_CUR);
        ftell(fp);
        printf("%d",ftell(fp));
        fputc('a',fp);
        fgets(ch,15,fp);
        printf("\n%s",ch);

        fclose(fp);
    }
}