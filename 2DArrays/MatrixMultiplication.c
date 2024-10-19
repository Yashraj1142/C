#include<stdio.h>

int main(){
    int mat1[3][3], mat2[3][3];
    int resMat[3][3] = {0};

    //elements of mat1
    printf("Matrix 1\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element: ");
            scanf("%d", &mat1[i][j]);
        }
    }

    //elements of mat2
    printf("Matrix 2\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element: ");
            scanf("%d", &mat2[i][j]);
        }
    }
    
    for(int m=0;m<3;m++){
        for(int n=0;n<3;n++){
            for(int k=0;k<3;k++){
                resMat[m][n] += mat1[m][k]*mat2[k][n];
            }
        }
    }

    //printing the matrix 1
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    //printing the matrix 2
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    //printing the resultant matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", resMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}