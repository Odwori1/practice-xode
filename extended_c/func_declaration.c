#include <stdio.h>

void sum();/*function declaration or prototype*/

void main() 
{
	sum();/*function calling*/
}
void sum() /*function definition, code defines action to be taken when function is called*/
{
	int a, b, sum=0;
	printf("enter to numbers to return sum\n");
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum of %d + %d = %d\n", a, b, sum);
}
