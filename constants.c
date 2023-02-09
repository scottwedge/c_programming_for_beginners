#include <stdio.h>

const int AGE = 37;     // use "const"


#define AGE2 38      // or use "#define" without "=" and without ";"

int main()
{
    printf("%d\n", AGE);
    printf("%d\n", AGE2);
}

