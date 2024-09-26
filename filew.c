#include<stdio.h>
#include<canio.h>
int main(){
    FILE *fp;
    fp=fopen("abc.txt","w");
    if(fp==NULL){
        printf("unable to create file:");

    }
else{
    printf("file is opened:")
    fclose(fp);
}
return 0;
}