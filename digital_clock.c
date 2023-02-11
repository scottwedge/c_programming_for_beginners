#include <stdio.h>

int main()
{
    int seconds, minutes, hours;

    printf("Enter value in hours:");  // Prompt for Hours value
    scanf("%d", &hours);

    printf("Hours =");
    printf("%d\n\n", hours);

    printf("Enter value in minutes:");  // Prompt for minutes value
    scanf("%d", &minutes);

    printf("minutes =");
    printf("%d\n\n", minutes);


    printf("Enter seconds value:");  // Prompt for time in seconds
    scanf("%d", &seconds);           // Read value

    printf("Seconds value =");     // DEBUG
    printf("%d\n", seconds);           // DEBUG


    return 0;
}
