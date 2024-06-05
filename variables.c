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

    printf("The value in \"myNum\" has gone from \"%d\" to \"%d\"!\n", 15, myNum);
    
    // You can add together variables
    int x = 3;
    int y = 6;
    int sum = x+y;

    printf("If you add \"%d\" and \"%d\", you get: %d\n", x, y, sum);

    

    //End main()
    return 0;
}