#include<stdio.h>
int main(){
    //i is row and j is column
    int i,j,n;
    printf("how many rows are needed in your pyramid\n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
        if(j>=n-(i-1)&& j<=n+(i-1))
        {
            printf("*");

        }
        else{
            printf(" ");
            
        }
        }
        printf("\n");
    }

}
