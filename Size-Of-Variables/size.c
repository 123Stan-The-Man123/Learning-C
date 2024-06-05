#include <stdio.h>

int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    // We use "%lu" for long unsigned integers
    printf("Size of an integer is: %lu\n", sizeof(myInt));
    printf("Size of a floating point number is: %lu\n", sizeof(myFloat));
    printf("Size of a double number is: %lu\n", sizeof(myDouble));
    printf("Size of a character is: %lu", sizeof(myChar));

    return 0;
}