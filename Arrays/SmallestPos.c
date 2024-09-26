#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i=0;i<size;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }

    int pos = 0;
    int small = arr[0];
    for(int j=0;j<size;j++){
        if(small>arr[j]){
            small=arr[j];
            pos = j;
        }
        else{
            continue;
        }
    }

    printf("The smallest number is %d and its position is %d", small, pos);
}