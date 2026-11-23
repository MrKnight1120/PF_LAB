/*
    Prog: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 22/11/2026
    Desc: Warehouse Inventory Management
*/
#include <stdio.h>

struct Item{
    int id;
    char name[50];
    int qty;
    float price;
};

int main(){
    struct Item it[5];
    int i,sid,found=0;
    float total=0;

    for(i=0;i<5;i++){
        printf("\nEnter details of item %d\n",i+1);
        printf("Enter ID: ");
        scanf("%d",&it[i].id);

        printf("Enter Name: ");
        scanf("%49s",it[i].name);

        printf("Enter Quantity: ");
        scanf("%d",&it[i].qty);

        printf("Enter Unit Price: ");
        scanf("%f",&it[i].price);

        total=total+(it[i].qty*it[i].price);
    } // end for
    printf("\nTotal Inventory Value: %.2f\n",total);
    printf("\nEnter Item ID to search: ");
    scanf("%d",&sid);

    for(i=0;i<5;i++){
        if(it[i].id==sid){
            printf("\nItem Found");
            printf("\nID: %d",it[i].id);
            printf("\nName: %s",it[i].name);
            printf("\nQuantity: %d",it[i].qty);
            printf("\nUnit Price: %.2f",it[i].price);
            found=1;
            break;
        } // end if
    } // end for
    if(found==0){
        printf("\nItem not found.");
    } // end if

    return 0;
} // end main