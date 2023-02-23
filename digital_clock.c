#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int get_hours()
{
    int h;
    printf("Enter value in hours:");  // Prompt for Hours value
    scanf("%d", &h);
    return h;
}

int get_minutes()
{
    int m;
    printf("Enter value in minutes:");  // Prompt for minutes value
    scanf("%d", &m);
    return m;
}

int get_seconds()
{
    int s;
    printf("Enter seconds value:");  // Prompt for time in seconds
    scanf("%d", &s);           // Read value
    return s;
}



int main()
{
    int seconds, minutes, hours, days;

    days = 0;   // initialize days value to zero

    hours = get_hours();

    minutes = get_minutes();

    seconds = get_seconds();

    while (1)      // Update time forever
    {
        system("clear");   // clear screen
        printf("Clock:\n");
        printf("days:%02d  %02d:%02d:%02d\n", days, hours, minutes, seconds);
        printf("-----------------\n");
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
            days++;
            }
    }

    return 0;
}
