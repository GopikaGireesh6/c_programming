#include<stdio.h>
int main(){
    int i,space,j,n;
    printf("enter the no of rows:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    
    for(i=n;i>0;i--){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        } 
            printf("\n");
        
    }


}