#include<stdio.h>

int main(){
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int arr[n][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element: ");
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}