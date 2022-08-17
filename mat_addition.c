//matrix-addition with dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

void mat_sum(int *, int *,int,int);

int main(){
    int r,c,i;
    int *mat_1, *mat_2;
    printf("Enter row and column: ");
    scanf("%d %d", &r, &c);
    mat_1 =  (int *) malloc(sizeof(int)*r*c);
    mat_2 = (int *) malloc(sizeof(int)*r*c);
    
    for(i=0;i<r*c;i++){
        printf("Enter element %d of matrix-1\n", i+1);
        scanf("%d",&i[mat_1]);
        printf("Enter element %d of matrix-2\n",i+1);
        scanf("%d",&i[mat_2]);
    }
    mat_sum(mat_1, mat_2,r,c);
    free(mat_1);
    free(mat_2);
    return 0;
}

void mat_sum(int *a, int *b, int rows, int column){
    int *sum,i,c;
    sum = (int *) malloc(sizeof(int)*rows*column);
    printf("The sum of your matrices is:\n");
    for(i=0;i<rows*column;i++){
        i[sum] = i[a] + i[b];
        printf("%d\t",i[sum]);
        if((i+1)%rows ==0)
            printf("\n");
    }
    free(sum);
}

