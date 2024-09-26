#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the suize of the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter the element of the array: ");
        scanf("%d", &arr[i]);
    }
    
    int exp = n-1;
    int digit = 0;
    for(int i=0;i<n;i++){
        digit += arr[i]*pow(10,(exp));
        exp--;
    }

    printf("The digit formed is: %d", digit);
}