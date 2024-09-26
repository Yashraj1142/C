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
    
    int max=arr[0];
    for(int j=0;j<size;j++){
        if(max<arr[j]){
            max = arr[j];
        }
        else{
            continue;
        }
    }

    int second_max = arr[0];
    for(int k=0;k<size;k++){
        if(second_max<arr[k] && arr[k]!=max){
            second_max=arr[k];
        }
        else{
            continue;
        }
    }
    printf("The second largest number in the array is : %d", second_max);
}