/*
    Prog: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 22/11/2026
    Desc: Student Profile Management
*/

#include <stdio.h>

struct Address{
    char city[50];
    int zipCode;
    char state[50];
};

struct Student{
    int rollNo;
    char name[50];
    float cgpa;
    struct Address studentAdd;
};

int main(){
    struct Student student1={2500,"Muhammad Usaid",3.5,{"Karachi",75300,"Sindh"}};
    printf("Student Profile\n");
    printf("\nRoll No: %d",student1.rollNo);
    printf("\nName: %s",student1.name);
    printf("\nCGPA: %.2f",student1.cgpa);
    printf("\nCity: %s",student1.studentAdd.city);
    printf("\nZip Code: %d",student1.studentAdd.zipCode);
    printf("\nState: %s",student1.studentAdd.state);

    return 0;
} // end main