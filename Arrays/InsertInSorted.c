//Insertion of element in an array which is already sorted in ascending order.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n+1];
    for(int i=0;i<n;i++){
        printf("Enter the elements of the array: ");
        scanf("%d", &arr[i]);
    }

    for(int l=0;l<n;l++){
        printf("arr[%d] : %d\n", l, arr[l]);
    }

    int index;
    int value;
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    for(int a=0;a<n;a++){
        if(value>arr[a] && value<arr[a+1]){
            index = a+1;
        }
    }

    for(int j=(n+1);j>index;j--){
        arr[j] = arr[j-1];
    }
    arr[index] = value;

    for(int k=0;k<n+1;k++){
        printf("arr[%d] : %d\n", k, arr[k]);
    }
}