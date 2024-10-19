#include<stdio.h>

void UpperTriangle(int n, int arr[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                arr[i][j] = 0;
            }
            else if(i<j){
                arr[i][j] = 1;
            }
            else{
                arr[i][j] = -1;
            }
        }
    }
}

void DisplayArr(int n, int arr[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter the dimention: ");
    scanf("%d", &n);

    int mat[n][n];

    UpperTriangle(n, mat);
    DisplayArr(n , mat);

    return 0;
}