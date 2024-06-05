#include <stdio.h>

int main() {
    // Create variables
    int myNum = 15;         // Integer
    float myFloat = 6.9;    // Floating point number
    char myChar = 'S';      //Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloat);
    printf("%c\n", myChar);

    //Print text and variables
    printf("The number stored in \"myNum\" is: %d\n", myNum);           //One data type
    printf("My float is: %f\nMy character is: %c", myFloat, myChar);    //Multiple data types

    //End main()
    return 0;
}