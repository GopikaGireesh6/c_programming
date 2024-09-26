#include<stdio.h>
int main(){
    int i,j,space=0,n;
    printf("enter the no of rows needed:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
         printf("\n");
    }
    
}