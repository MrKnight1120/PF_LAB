#include <stdio.h>

int main()
{
    float programming, mathematics, ai, attendance, average;
    int eligible = 0;

    printf("Enter Programming marks: ");
scanf("%f", &programming);

printf("Enter Mathematics marks: ");
scanf("%f", &mathematics);

printf("Enter AI marks: ");
scanf("%f", &ai);

printf("Enter attendance percentage: ");
scanf("%f", &attendance);

    if (programming < 0 || programming > 100 || mathematics < 0 ||
        mathematics > 100 || ai < 0 || ai > 100 || attendance < 0 || attendance > 100)
    {
        printf("Invalid marks or attendance.\n");
        return 0;
    }

    if (programming >= 50)
    {
        if (mathematics >= 50)
        {
            if (ai >= 50)
            {
                if (attendance >= 75)
                    eligible = 1;
            }
        }
    }

    if (eligible == 1)
    {
        average = (programming + mathematics + ai) / 3.0;
        printf("Average: %.2f\n", average);
        if (average >= 80)
            printf("Excellent\n");
        else if (average >= 70)
            printf("Very Good\n");
        else if (average >= 60)
            printf("Good\n");
        else if (average >= 50)
            printf("Satisfactory\n");
        else
            printf("Poor\n");
    }
    else
        printf("Student is Not Eligible\n");
    return 0;
}
