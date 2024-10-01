#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int pasTri[rows][rows];

    //creating the pascal triangle
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                pasTri[i][j] = 1;
            }
            else{
                pasTri[i][j] = pasTri[i-1][j-1] + pasTri[i-1][j];
            }
        }
    }

    //printing the triangle
    for(int i=0;i<rows;i++){
        for(int space=0;space<rows-i-1;space++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ", pasTri[i][j]);
        }
        printf("\n");
    }
}