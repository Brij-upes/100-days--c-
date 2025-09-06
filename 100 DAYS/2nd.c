#include <stdio.h>
// Write a program to input two numbers and display their sum, difference, product, and quotient.

void main()
{

    int num1, num2;
    printf("enter num1:");

    scanf("%d", &num1);
    printf("enter num2:");
    scanf("%d", &num2);

    printf("Sum = %d\n", num1 + num2);
    printf("substraction = %d\n", num1 - num2);
    printf("multiplication = %d\n", num1 * num2);
    printf("division = %d\n", num1 / num2);
    printf("modulus = %d\n", num1 % num2);
}