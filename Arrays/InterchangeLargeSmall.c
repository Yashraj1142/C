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

    printf("Original Array: \t");
    for(int b=0;b<size;b++){
        printf("%d\t", arr[b]);
    }

    int max = arr[0];
    int small = arr[0];
    int pos_max = 0;
    int pos_small = 0;

    for(int j=0;j<size;j++){
        if(max<arr[j]){
            max = arr[j];
            pos_max = j;
        }
        else{
            continue;
        }
    }

    for(int k=0;k<size;k++){
        if(small>arr[k]){
            small = arr[k];
            pos_small = k;
        }
        else{
            continue;
        }
    }

    int temp;
    temp = arr[pos_max];
    arr[pos_max] = arr[pos_small];
    arr[pos_small] = temp;

    printf("\nNew Array: \t\t");
    for(int a=0;a<size;a++){
        printf("%d\t", arr[a]);
    }
}