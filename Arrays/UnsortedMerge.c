//Merging two unsorted arrays

#include<stdio.h>

int main(){
    int n1;
    printf("Enter the number of elements: ");
    scanf("%d", &n1);

    int arr1[n1];
    for(int i=0;i<n1;i++){
        printf("Enter the element: ");
        scanf("%d", &arr1[i]);
    }

    int n2;
    printf("Enter the number of elements: ");
    scanf("%d", &n2);

    int arr2[n2];
    for(int i=0;i<n2;i++){
        printf("Enter the element: ");
        scanf("%d", &arr2[i]);
    }

    int arr3[n1+n2];
    int i=0;
    while(i<n1){
        arr3[i] = arr1[i];
        i++;
    }
    while(i<(n1+n2)){
        arr3[i] = arr2[i-n1];
        i++;
    }

    for(int j=0;j<(n1+n2);j++){
        printf("arr[%d] : %d\n", j, arr3[j]);
    }
}