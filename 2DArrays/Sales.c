#include<stdio.h>

int main(){
    int sales_man, items;

    printf("Enter the number of sales man: ");
    scanf("%d", &sales_man);
    printf("Enter the number of items: ");
    scanf("%d", &items);
    printf("\n");

    int sales[sales_man][items];

    //sales of each salesman
    for(int i=0;i<sales_man;i++){
        for(int j=0;j<items;j++){
            printf("Enter the sales of item %d by salesman man %d: ", j+1, i+1);
            scanf("%d", &sales[i][j]);
        }
        printf("\n");
    }

    //sales chart
    for(int i=0;i<sales_man;i++){
        printf("Salesman %d: \t", i+1);
        for (int j=0;j<items;j++){
            printf("Item %d: %d\t", j+1, sales[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //calculating total sales by each salesman
    for(int i=0;i<sales_man;i++){
        int totalSale = 0;
        for(int j=0;j<items;j++){
            totalSale += sales[i][j];
        }
        printf("Total sales by sales man %d: %d", i+1, totalSale);
        printf("\n");
    }
    printf("\n");

    //calculating total sales of each item
    for(int i=0;i<items;i++){
        int totalItems = 0;
        for(int j=0;j<sales_man;j++){
            totalItems += sales[j][i];
        }
        printf("Total sales of item %d: %d", i+1, totalItems);
        printf("\n");
    }

    return 0;
}