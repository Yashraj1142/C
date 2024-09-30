#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }

    int val;
    printf("Enter the value to search: ");
    scanf("%d", &val);

    int found = 0;
    int beg=0;
    int end=n-1;
    
    while(beg<=end){
        int mid = (beg+end)/2;
        if(arr[mid]==val){
            printf("%d is present at position %d", val, mid);
            found = 1;
            break;
        }
        if(arr[mid]>val){
            end = mid-1;
        }
        else if(arr[mid]<val){
            beg = mid+1;
        }
    }
    if(beg>end && found == 0){
        printf("No such element found");
    }
}