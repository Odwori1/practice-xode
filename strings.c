#include <stdio.h>
/*
 * a string is a sequence of characters
 * strings use %s format identifier
 * this program uses character arrays
 * strings require a null terminator to tell the program where the string stops(\0)
 */
int main()
{
	char name [45]; //declaration and initialization of string using an array
	
	printf("enter you name here: ");
	
	scanf("%s", name);
	
	printf("Hello! %s\nThat is awesome!\n", name);
	

	
	return(0);

}
