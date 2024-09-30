#include<stdio.h>

int takeValues(int, int*);
int Display(int, int*);

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    takeValues(n, arr);
    Display(n,arr);
}

int takeValues(int n, int arr[n]){
    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
}

int Display(int n, int arr[n]){
    for(int i=0;i<n;i++){
        printf("arr[%d]: %d\n",i , arr[i]);
    }
}