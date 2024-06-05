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
    printf("My float is: %f\nMy character is: %c\n", myFloat, myChar);    //Multiple data types

    // You can assign a variable to a variable :O
    int favouriteNum = 5;
    myNum = favouriteNum;

    printf("The value in \"myNum\" has gone from \"%d\" to \"%d\"!", 15, myNum);
    
    //End main()
    return 0;
}