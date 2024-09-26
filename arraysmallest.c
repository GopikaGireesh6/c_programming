#include<stdio.h>
void main()
{ int n,i,smallest;
printf("enter size ");
scanf("%d",&n);
int a[n];
smallest=a[0];
for(i=0;i<n;i++)
  {printf("enter element \t");
    scanf("%d",&a[i]);
   }
  for(i=0;i<n;i++)
    {
        
     if(a[i]<smallest)
     {smallest=a[i];}
    }
    printf("%d is smallestv number",smallest);
    }
