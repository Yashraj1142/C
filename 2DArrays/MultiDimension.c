#include<stdio.h>

int main(){
    int n;
    printf("Enter the dimension: ");
    scanf("%d", &n);

    int arr[n][n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                printf("Enter the element: ");
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }
}