#include <stdio.h>
/*
 * variables - is something we can use to store data
 * a variable can be named anything
 * a variable type must be defined eg int, float, char
 * then initialize the variable by assigning it a value.
 */

int main()

{	int x; /* syntax is the format of the language or rules that must be followed in any particular programming language */
	x = 10; /* our variable is an integer, therefore it's value must be a whole number
       		*we declared a variable 'x' */

	int y = x / 2; /* this is called an expression */
	printf("value of 'y': %d\n", y); /* this prints the value of y to the console after compilation */
	return(0); /* program returns 0 if it runs succesfully */
}
