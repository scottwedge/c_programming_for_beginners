#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int seconds, minutes, hours;

    printf("Enter value in hours:");  // Prompt for Hours value
    scanf("%d", &hours);

    printf("Enter value in minutes:");  // Prompt for minutes value
    scanf("%d", &minutes);


    printf("Enter seconds value:");  // Prompt for time in seconds
    scanf("%d", &seconds);           // Read value


    while (1)      // Update time forever
    {
        system("clear");
        printf("Clock:\n");
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
        sleep(1);
        seconds++;           // increment seconds counters
        if (seconds >= 60)
            {
            seconds = 0;
            minutes++;     // increment minutes counter
            }
        if (minutes >= 60)
            {
            minutes = 0;
            hours++;       // increment hours counter using '++'
            }
        if (hours >= 24)
            {
            hours = 0;
            }
    }

    return 0;
}
