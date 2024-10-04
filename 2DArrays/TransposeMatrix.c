#include<stdio.h>

int main(){
    int mat[3][3], transMat[3][3] = {0};

    //taking the inputs for elements of the matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element of the matrix: ");
            scanf("%d", &mat[i][j]);
        }
    }

    //prinitng the original matrix
    printf("Original Matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", mat[i][j]);
    }
    printf("\n");
    }

    //creating the transpose matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transMat[i][j] = mat[j][i];
        }
    }

    //printing the transposed matrix
    printf("\nTransposed Matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", transMat[i][j]);
    }
    printf("\n");
    }
}