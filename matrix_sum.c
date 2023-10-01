#include <stdio.h>

int main(void) 
{
    int matrix1[3][3], matrix2[3][3], sum[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Enter The Value of matrix1[%d][%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Enter The Value of matrix2[%d][%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
    
    
    printf("Matirx : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

