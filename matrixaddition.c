//matrix addition using pointer of pointer
#include <stdio.h>
#include <stdlib.h>
void add(int **,int **,int,int);

int main(){
    int **mat_1,**mat_2,r,c,i,j;
    printf("Specify Rows and Column: ");
    scanf("%d %d",&r,&c);
    mat_1 = (int **) malloc(sizeof(int)*r);
    mat_2 = (int **) malloc(sizeof(int)*r);
    for(i=0;i<r;i++){
        i[mat_1] = (int *) malloc(sizeof(int)*c);
        i[mat_2] = (int *) malloc(sizeof(int)*c);
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the %d %d element of matrix-1: ",i,j);
            scanf("%d",&mat_1[i][j]);
            printf("Enter the %d %d element of matrix-2: ",i,j);
            scanf("%d",&mat_2[i][j]);
        }
    }
    add(mat_1,mat_2,r,c);
    free(mat_1);
    free(mat_2);
    return 0;
}

void add(int **a, int **b, int rows, int column){
    int **sum,i,j;
    sum = (int **) malloc(sizeof(int)*rows);
    for(i=0;i<rows;i++)
        rows[sum] = (int *) malloc(sizeof(int)*column);
    printf("The sum of your given matrixes is:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<column;j++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    free(sum);
}



