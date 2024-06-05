#include <stdio.h>

int main() {
    int x = 5;
    int y = 2;
    float division = (float) x/y;       // Here we put (float) as the answer is a float, otherwise it would be truncated

    printf("%.1f", division);

    return 0;
}