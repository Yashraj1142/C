#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    for(int i=0;i<size;i++){
        printf("\nEnter the elements: ");
        scanf("%d", &arr[i]);
    }

    for(int j=0;j<size;j++){
        printf("\nElement at position %d: %d", j, arr[j]);
    }
}