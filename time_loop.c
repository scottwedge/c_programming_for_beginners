// Program to measure time it takes to count and print 10,000,000 lines

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int start_time = time(NULL);
    int j = 1;
    while (j < 1000000)
    {
        printf("%d\n",j);
        j++;
    }
    int end_time = time(NULL);
    int duration = end_time - start_time;
    printf("1M iterations took %d seconds\n",duration);
}

