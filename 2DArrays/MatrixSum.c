#include<stdio.h>

int main(){
    int mat1[3][3], mat2[3][3], matSum[3][3];

    printf("Matrix 1\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element: ");
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nMatrix 2\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element: ");
            scanf("%d", &mat2[i][j]);
        }
    }

    //printing the matrices
    printf("Matrix 1\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Matrix 2\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matSum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    //printing the sum of the matrix
    printf("\n");
    printf("Sum of the Matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", matSum[i][j]);
        }
        printf("\n");
    }

}