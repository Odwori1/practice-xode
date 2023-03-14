#include <stdio.h>
/**
* this program prints ASCII character values 
* declare a character 
* use scanf to take input
* use printf %d or %i to print out put as an integer
*/
int main()
{
	char ASCII;

	printf("enter character to see character value: ");
	scanf("%c", &ASCII);
	printf("ASCII value of %C is %d\n", ASCII, ASCII);	

	int integer; //a new variable is declared

	printf("please enter an integer between 0 - 127:  "); // a prompt for the user to understand what to input
	scanf("%d", &integer); // scans the users input 
	printf("the integer value %d represents %c\n", integer, integer); // returns character value when ASCII value is input by user
	
	// we can also use characters to do math
	char math = 'A' + '\t';
	
	printf("A(65) + \\t(11) = %c(%d)\n", math, math); // adding a backslash(\) escapes a special character eg '\t' is escaped with '\\t'


	return(0);

}
