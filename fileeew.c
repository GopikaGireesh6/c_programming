#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp=fopen("abc.txt","w");
    if(fp==NULL){
        printf("unable to create file:");

    }
else{
    printf("file is opened:");
    fputc('g',fp);
    fclose(fp);
}
return 0;
}