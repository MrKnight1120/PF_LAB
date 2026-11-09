/*
    Programmer: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 09/11/2026
    Desc: smart home iot sensor data display system
*/

#include <stdio.h>

void printSensorData(void *ptr, char type){
    if (type == 'f'){
        float temp = *(float*)ptr;
        printf("Temperature: %.2f C\n", temp);
    }
    else if (type == 'i'){
        int motion = *(int*)ptr;
        if (motion == 1){
            printf("Motion Detected\n");
        }
        else{
            printf("No Motion\n");
        } // end if
    }
    else if (type == 'c'){
        char door = *(char*)ptr;
        if (door == 'O'){
            printf("Door Open\n");
        }
        else if (door == 'C'){
            printf("Door Closed\n");
        } // end if
    } // end if
} // end function

int main(){
    float temperature;
    int motionStatus;
    char doorStatus;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Enter motion status (1 or 0): ");
    scanf("%d", &motionStatus);

    printf("Enter door status (O or C): ");
    scanf(" %c", &doorStatus);

    printSensorData(&temperature, 'f');
    printSensorData(&motionStatus, 'i');
    printSensorData(&doorStatus, 'c');

    return 0;
} // end main