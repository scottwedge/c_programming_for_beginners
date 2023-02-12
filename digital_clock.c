#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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



    while (1)
    {
        system("clear");
        printf("Clock:\n");
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
        sleep(1);
        seconds++;     // increment counters
    }


// Update time forever


    return 0;
}
