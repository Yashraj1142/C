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

    int group[n];
    for(int a=0;a<n;a++){
        group[a] = 0;
    }

    int target;
    int index = -1;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    for(int k=0;k<n;k++){
        if(arr[k]==target){
            group[k]++;
        }
    }
    
    for(int b=0;b<n;b++){
        if(group[b] == 1){
            printf("Element found at arr[%d]\n", b);
        }
    }
}