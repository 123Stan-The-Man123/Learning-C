#include <stdio.h>

int main() {
    // Declare a floating point number
    float aFloat = 5.3456;

    // Print without any precision
    printf("No precision: %f\n", aFloat);

    // Print with decimal precision
    printf("1DP: %.1f\n", aFloat);     // 1DP
    printf("2DP: %.2f\n", aFloat);     // 2DP
    printf("3DP: %.3f", aFloat);       // 3DP

    // Exit main()
    return 0;
}