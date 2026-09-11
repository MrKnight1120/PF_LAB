#include <stdio.h>

int main() {
    float temperature;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("\nTemperature: %.2f C\n", temperature);

    return 0;
}