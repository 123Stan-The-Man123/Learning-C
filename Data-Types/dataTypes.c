#include <stdio.h>

int main() {
    /* Float has a resolution of about 6-7 DP, but uses 4 bytes
       Double has a resolution of about 15 DP, but uses 8 bytes*/
    
    float myFloat = 6.5555555;
    double myDouble = 6.555555555555555;

    printf("My float is \"%f\", and my double is \"%lf\"\n", myFloat, myDouble);

    // Powers of 10

    double test = 12e4;     // 12 x 10000

    printf("%lf", test);

    return 0;
}