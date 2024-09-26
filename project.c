
#include <stdio.h>

int main()
{
    struct student
    {
        int rollno;
        char name[20];
        float marks;
    };
    struct student s[5];
    struct student *p=&s;
    int i;
    printf("enter the datsa:");
    for(i=0;i<5;i++)
    {
        scanf("%d%s%f",&(p+i)->rollno,(p+i)->name,&(p+i)->marks);
    
    
    
    if((p+i)->marks<0 || (p+i)->marks>100)
    {
        printf("Wrong Entry");
    }
    else if((p+i)->marks<50)
    {
        printf("Grade F");
    }
    else if((p+i)->marks>=50 && (p+i)->marks<60)
    {
        printf("Grade D");
    }
    else if((p+i)->marks>=60 && (p+i)->marks<70)
    {
        printf("Grade C");
    }
    else if((p+i)->marks>=70 && (p+i)->marks<80)
    {
        printf("Grade B");
    }
    else if((p+i)->marks>=80 && (p+i)->marks<90)
    {
        printf("Grade A");
    }
    else
    {
        printf("Grade A+");
    }
}
for(i=0;i<5;i++)
    {
        printf("\n%d\n%s\n%f\n",(p+i)->rollno,(p+i)->name,(p+i)->marks);
    }
}
		