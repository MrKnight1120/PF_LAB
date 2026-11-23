/*
    Prog: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 22/11/2026
    Desc: Highway Toll Booth Management
*/
#include <stdio.h>

#define TOLL 50
void pv(char vt[]){
    static int c=0;
    static int t=0;
    c++;
    t=t+TOLL;

    printf("\nVehicle Type: %s",vt);
    printf("\nToll Fee: %d PKR",TOLL);
    printf("\nTotal Vehicles: %d",c);
    printf("\nTotal Collection: %d PKR\n",t);
} // end function

int main(){
    pv("Car");
    pv("Bus");
    pv("Truck");
    pv("Bike");

    printf("\nFinal Toll Plaza Report");
    pv("Car");

    return 0;
} // end main