#include<stdio.h>

void display(int, int*);
int merge(int, int, int*, int*, int*);

int main(){
    int n1;
    printf("Enter the size of array 1: ");
    scanf("%d", &n1);
    int arr1[n1];

    //elements of array 1
    for(int i=0;i<n1;i++){
        printf("Enter the elements: ");
        scanf("%d", &arr1[i]);
    }
    
    int n2;
    printf("Enter the size of array 2: ");
    scanf("%d", &n2);

    int arr2[n2], arr3[n1+n2];    

    //elements of array 2
    for(int j=0;j<n2;j++){
        printf("Enter the elements: ");
        scanf("%d", &arr2[j]);
    }

    merge(n1, n2, arr1, arr2, arr3);
    display(n1+n2, arr3);

    return 0;
}

int merge(int n1, int n2, int arr1[n1], int arr2[n2], int arr3[n1+n2]){
    for(int i=0;i<n1;i++){
        arr3[i] = arr1[i];
    }
    for(int j=0;j<n2;j++){
        arr3[j+n1] = arr2[j];
    }
}

void display(int n, int arr3[n]){
    printf("arr3: \t");
    for(int i=0;i<n;i++){
        printf("%d\t", arr3[i]);
    }
}