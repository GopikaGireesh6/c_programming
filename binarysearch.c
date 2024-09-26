#include<stdio.h>
int main(){
    int n,data,found,mid;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the data:");
    scanf("%d",&data);
    int low=0;
    int high=n-1;
    
    while(low<=high){
         mid=(low+high)/2;
         found=0;
        if(data<a[mid])
        {
            high=mid-1;
        }
        else if(data>a[mid]){
            low=mid+1;
        }
        else if(data==a[mid]){
            
            found=1;
            break;
             
        }
        }
        if(found==1){
            printf("%d found at %d",data,mid);

        }
        else{
            printf("not found");
        }
    }

 

