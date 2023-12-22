#include <stdio.h>

void multiply_matrices(int mat1[3][3], int mat2[3][3], int res[3][3]) {
    int i, j, k;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            res[i][j] = 0;
            for (k = 0; k < 3; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
int main() {
    int n1 [3][3];
    int n2 [3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the %d element of %d row for n1:",j+1,i+1);
            scanf("%d",&n1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the %d element of %d row for n2:",j+1,i+1);
            scanf("%d",&n2[i][j]);
        }
    }
    int res[3][3];
    multiply_matrices(n1, n2, res);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
