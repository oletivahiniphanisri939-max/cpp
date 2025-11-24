#include <stdio.h>

int main() {
    int a[10][10], b[10][10], r1, c1, r2, c2;
    
    printf("Enter rows & columns of matrix1: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows & columns of matrix2: ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2) {
        printf("Multiplication Not Possible");
        return 0;
    }

    printf("Enter matrix1:\n");
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            scanf("%d", &a[i][j]);

    printf("Enter matrix2:\n");
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            scanf("%d", &b[i][j]);

    int result[10][10]={0};

    for(int i=0;i<r1;i++)
        for(int j=0;j<c2;j++)
            for(int k=0;k<c1;k++)
                result[i][j] += a[i][k] * b[k][j];

    printf("Result:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}

