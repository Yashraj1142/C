//WAP to delete an element from a given location.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }

    for(int j=0;j<n;j++){
        printf("arr[%d] : %d\n", j, arr[j]);
    }

    int index;
    int value;
    printf("Enter the value to delete the element from: ");
    scanf("%d", &value);

    for(int a=0;a<n;a++){
        if(value == arr[a]){
            index = a;
        }
    }

    for(int k=index;k<n;k++){
        arr[k] = arr[k+1];
    }
    n--;

    for(int l=0;l<n;l++){
        printf("arr[%d] : %d\n", l, arr[l]);
    }
}