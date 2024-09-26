//WAP to find median of a sorted floating array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%f", &arr[i]);
    }

    float median = 0;

    if(n%2==1){
        median = arr[(n)/2];
    }
    else{
        median = (arr[n/2]+arr[(n/2)-1])/2.0;
    }

    printf("The median is: %.2f", median);
}