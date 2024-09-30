#include<stdio.h>

int findSmallest(int,  int*);
int findLargest(int,  int*);
int swapVal(int,  int*);

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the elements: ");
        scanf("%d", &arr[i]);
    }
    printf("Original Array: ");
    for(int i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }

    swapVal(n ,arr);

    return 0;
}

int findSmallest(int n, int arr[n]){
    int min = arr[0];
    int posMin = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            posMin = i;
        }
    }
    return posMin;
}

int findLargest(int n, int arr[n]){
    int max = arr[0];
    int posMax = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            posMax = i;
        }
    }
    return posMax;
}

int swapVal(int n, int arr[n]){
    int small = findSmallest(n, arr);
    int large = findLargest(n, arr);
    int temp = arr[small];
    arr[small] = arr[large];
    arr[large] = temp;

    printf("\nSwapped Array: ");
    for(int i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
}