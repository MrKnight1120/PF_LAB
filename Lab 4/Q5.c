#include <stdio.h>

int main() {
    int role, status, security;

    printf("1 = Admin\n");
    printf("2 = Researcher\n");
    printf("3 = Student\n");

    printf("Enter user role: ");
    scanf("%d", &role);

    printf("Enter account status (1 = Active, 0 = Inactive): ");
    scanf("%d", &status);

    printf("Enter security level: ");
    scanf("%d", &security);

    if (status != 1) {
        printf("Access Denied\n");
    }
    else if (role == 1 && security >= 3) {
        printf("Admin Access Granted\n");
    }
    else if (role == 2 && security >= 2) {
        printf("Researcher Access Granted\n");
    }
    else if (role == 3 && security >= 1) {
        printf("Student Access Granted\n");
    }
    else {
        printf("Access Denied\n");
    }

    return 0;
}