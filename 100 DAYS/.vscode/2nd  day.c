#include <stdio.h>

void main()
{

    float l, b;
    printf("enter length:");
    scanf("%f", &l);
    printf("enter breath:");
    scanf("%f", &b);
    printf("area of rectangle is %f\n", l * b);
    printf("perimeter of rectangle is %f\n", 2 * (l + b));
}