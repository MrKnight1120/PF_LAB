/*
    Prog: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 22/11/2026
    Desc: Product Catalog Management
*/

#include <stdio.h>
struct Product{
    int id;
    char name[50];
    char category[50];
    float price;
    int stock;
};

void dispProductDet(struct Product p){
    float finalPrice=p.price-(p.price*0.05);

    printf("\nProduct ID: %d",p.id);
    printf("\nName: %s",p.name);
    printf("\nCategory: %s",p.category);
    printf("\nOriginal Price: %.2f",p.price);
    printf("\nAvailable Stock: %d",p.stock);
    printf("\nFinal Price after 5%% discount: %.2f",finalPrice);
} // end function

int main(){
    struct Product p={101,"Laptop","Electronics",100000,15};
    dispProductDet(p);

    return 0;
} // end main