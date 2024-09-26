// Write a program to read marks of 10 students in the range of 0-100. Then make 10 groups: 0-10, 10-20, 20-30, etc. Count the number of values that falls in each group and display the result. And prepeare a histogram for that.

#include<stdio.h>

int main(){
    int marks[10];
    int groups[10] = {0};

    //tsking the marks as input
    for(int i=0;i<10;i++){
        printf("Enter the marks: ");
        scanf("%d", &marks[i]);

        if(marks[i]<0 || marks[i]>100){
            printf("Invalid input.\nMarks must lie between 0 and 100\n");
            i--;
        }
    }

    // int groupIndex;
    //make groups
    for(int j=0;j<10;j++){
        int groupIndex = marks[j] / 10;
        groups[groupIndex]++;
    }

    //printing the result
    for(int k=0;k<10;k++){
        printf("Group [%d-%d] : %d entries\n", k*10, (k+1)*10, groups[k]);
    }
    
    printf("\n\n");

    for(int a=0;a<10;a++){
        printf("Group [%d-%d] | ", a*10, (a+1)*10);
        for(int b=0;b<groups[a];b++){
            printf("*");
        }
        printf("\n");
    }
}