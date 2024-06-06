#include <stdio.h>

int main() {
    // Arithmetic operators
    int add = 10+5;                         // Addition
    int subtract = add - 13;                // Subraction
    int multiply = add * subtract;          // Multiplication
    int divide = multiply / subtract;       // Division
    int modulus = divide % 2;               // Modulus division
    int increment = 5;          
    increment = ++increment;                // Incrementation
    int decrement;
    decrement = --increment;                // Decrementation

    // Assignment operators:
    add += 1;
    subtract -= 1;
    multiply *= 5;
    divide /= 3;
    modulus %= 2;
    int x = 5;
    x &= 3;
    x |= 3;
    x ^= 3;
    x >>= 3;
    x <<= 3;

    /*Comparison operators:
    ==
    !=
    >
    <
    >=
    <=
    */

    /*Logical operators:
    &&  and
    ||  or
    !   not
    */

    return 0;
}