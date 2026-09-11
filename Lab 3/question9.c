#include <stdio.h>

int main() {
    char productname[50];
    int quantity;
    float price;

    printf("Enter product name: ");
    fgets(productname, 50, stdin);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("\nProduct Name: %s", productname);
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price);

    return 0;
}