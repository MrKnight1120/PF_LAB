/*
    Prog: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 22/11/2026
    Desc: Hospital Record Management
*/
#include <stdio.h>

struct HospRec{
    struct PatientInfo{
        int id;
        char name[50];
        int age;
    } patient;
    int roomNo;
    int days;
};

int main(){
    struct HospRec h={101, "Ali", 25, 205, 4};
    struct HospRec *ptr=&h;

    printf("Hospital Record\n");
    printf("\nPatient ID: %d",ptr->patient.id);
    printf("\nPatient Name: %s",ptr->patient.name);
    printf("\nPatient Age: %d",ptr->patient.age);
    printf("\nRoom Number: %d",ptr->roomNo);
    printf("\nHospitalization Days: %d",ptr->days);

    return 0;
} // end main