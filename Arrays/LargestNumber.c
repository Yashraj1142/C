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

    int max = arr[0];
    for(int j=0;j<size;j++){
        if(max<arr[j]){
            max = arr[j];
        }
        else{
            continue;
        }
    }
    printf("The largest number is: %d", max);
}