#include<stdio.h>

int main(){
    int stud, sub;
    printf("Enter the number of students: ");
    scanf("%d", &stud);
    printf("Enter the number of subjects: ");
    scanf("%d", &sub);
    printf("\n");

    int marks[stud][sub];

    for(int i=0;i<stud;i++){
        printf("Student %d\n", i+1);
        for(int j=0;j<sub;j++){
            printf("Enter the marks in subject %d: ", j+1);
            scanf("%d", &marks[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<stud;i++){
        printf("Student %d: \t", i+1);
        for(int j=0;j<sub;j++){
            printf("subject %d: %d\t", j+1, marks[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<stud;i++){
        int max = marks[i][0];
        int subject = 0;
        for(int j=0;j<sub;j++){
            if(max<marks[i][j]){
                max = marks[i][j];
                subject = j;
            }
        }
        printf("Maximum marks for Student %d is %d in subject %d.", i+1, max ,subject+1);
        printf("\n");
    }
}