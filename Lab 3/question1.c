#include <stdio.h>

int main() {
    char name[50];
    int age;
    char city[50];

    printf("Enter your name: ");
    fgets(name, 50, stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    getchar();

    printf("Enter your city: ");
    fgets(city, 50, stdin);

    printf("Name: %s", name);
    printf("Age: %d", age);
    printf("City: %s", city);

    return 0;
}