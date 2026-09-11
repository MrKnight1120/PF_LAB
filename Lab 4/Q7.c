#include <stdio.h>

int main() {
    float DataUsed, PricePerGb;
    float BasicCost, Discount, FinalCost;

    printf("Enter data used in GB: ");
    scanf("%f", &DataUsed);

    printf("Enter price per GB: ");
    scanf("%f", &PricePerGb);

    BasicCost = DataUsed * PricePerGb;

    if (DataUsed < 50) {
        Discount = 0;
    }
    else if (DataUsed < 100) {
        Discount = BasicCost * 5 / 100;
    }
    else if (DataUsed < 200) {
        Discount = BasicCost * 10 / 100;
    }
    else {
        Discount = BasicCost * 15 / 100;
    }

    FinalCost = BasicCost - Discount;

    printf("Basic Cost: %.2f\n", BasicCost);
    printf("Discount Amount: %.2f\n", Discount);
    printf("Final Cost: %.2f\n", FinalCost);

    return 0;
}