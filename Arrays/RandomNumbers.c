//print m random elements from an array of n inputs

#include<stdio.h>
#include<stdlib.h>

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i=0;i<size;i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    
    int randomReqd;
    printf("Enter the number of random generations: ");
    scanf("%d", &randomReqd);

    if(randomReqd>size){
        printf("ERROR -- Random values count exceeed the size of the array");
    }
    else{
    printf("Random values from the array are: ");
    for(int j=0;j<randomReqd;j++){
        int Randno = rand() % size;
        printf("%d\t", arr[Randno]);
    }
    }

}