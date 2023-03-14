#include <stdio.h>
/**
 * declaring a variable is to create a variable eg int x; now we have a variable called x of type int.
 * initializing a variable on the other hand is assigning a variable a value.
 * variable names are case sensitive therefore: int a; is not same as int A;
 * A variable can not start with a digit/number so a variable name cannot start with 0,1,2,3,...
 * use variable names that are easy to remember, this makes your code more readable. It is a good idea therefore to avoid shorthand 
 */
int main()

{
	printf("Enter your last name:  ");
	char name[43];
	scanf("%s", name);
	printf("that is a nice last name %s\n", name); 


	return(0);

}
