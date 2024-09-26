#include<stdio.h>
//function with argument without return value
void area(int ,int);/*function declaration*/
int main(){
    int length=3,breadth=5;
     /*arguments/actual parameters*/
    area(length,breadth);/*function call*/

}
/*parameters/formal parameters*/
void area(int L,int B) /*function definition*/
{
    int A;
    A=L*B;
    printf("area=%d",A);
    return 0;
}