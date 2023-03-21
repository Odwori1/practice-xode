#include <stdio.h>
#include <math.h>
/*
 * this program takes two doubles as inputs
 * calculates a hypotenuse of a right angle 
 * outputs the result

*/
int main()

{
    double a;
    double b;

   printf("this program calculates the hypotenuse of a right angle.\n");

    printf("Enter first number: \n");
    scanf("%lf", &a);

    printf("Enter second number: \n");
    scanf("%lf", &b);

    double c = sqrt((a * a) + (b * b));

    printf("hypotenusen is %f\n", c);

    return 0;
}
