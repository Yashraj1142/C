#include<stdio.h>

int takeValues(int, int*);
int display(int, int*);
int findSmallest(int, int*);

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    takeValues(n, arr);
    display(n, arr);
    printf("\nThe smallest element in array is: %d", findSmallest(n, arr));
}

int takeValues(int n, int arr[n]){
    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
}

int display(int n, int arr[n]){
    for(int i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
}

int findSmallest(int n, int arr[n]){
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}