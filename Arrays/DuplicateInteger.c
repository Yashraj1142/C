#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }

    int outFlag = 0;

    for(int j=0;j<n;j++){
        // int ele = arr[j];
        int flag = 0;
        for(int k=(j+1);k<n;k++){
            if(arr[j]==arr[k]){
                flag++;
                outFlag++;
            }
        }
        if(flag>0){
            printf("%d is repeated %d times.\n", arr[j], flag);
        }
    }

    if(outFlag==0){
        printf("No duplicate values");
    }
}