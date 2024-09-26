
/*#define  ROW 3
#define  COL 4
#include<stdio.h>
int main(){
    int a[ROW][COL],i,j;
    printf("enter the elements in matrix(%d*%d) row_wise:\n",ROW,COL);
    for(i-=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            scanf("%d",&a[i][j]) ;      
             }
    }
    printf("the m atrix that you have entered:\n");
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("%d",a[i][j]);
            printf("\n");
        }
    }
}*/

#define MAX_ROWS 100
#define MAX_COLS 100
#include<stdio.h>

void print2DArray(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int array[MAX_ROWS][MAX_COLS];

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input values for the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Print the array
    printf("2D Array:\n");
    print2DArray(array, rows, cols);

    return 0;
}