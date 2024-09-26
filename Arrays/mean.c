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
    
    int sum=0;
    for(int j=0;j<size;j++){
        sum = sum+arr[j];
    }

    float mean = sum/size;
    printf("The mean of the elements in the array is: %.2f", mean);
}