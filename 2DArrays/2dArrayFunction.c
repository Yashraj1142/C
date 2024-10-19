#include<stdio.h>

void ReadArr(int arr[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element: ");
            scanf("%d", &arr[i][j]);
        }
    }
}

void printArr(int arr[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int arr[3][3];

    ReadArr(arr);
    print("\n");
    printArr(arr);
}