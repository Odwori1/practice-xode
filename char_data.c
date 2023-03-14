#include <stdio.h>
/**
* char - short for character
* char is used to store individual characters
* a character is anything we can type, input or output on a computer
* therefore, you can think of anything on yyour computer keyboard as a character
* when writing characters, always use single quotes (') around them eg ('h', 'b','m'....)
* in C programming there is something called a character set which basically refers to allowed characters in c programming
* in C program we use the ASCII(American standard code for information interchange) character set
* Using ASCII we are able to represent 128 characters
*/
int main()
{
	char myChar;
	printf("this is one of the 26 letters:   ");
	scanf("%c", &myChar);
	printf("%c\n", myChar);

	return(0);
}
