#include <stdio.h>
#include <string.h>
/**
 * this program uses strcpy to copy source string to destination string
 * the program uses the string.h library
 * The strcpy function is used whenever you need to copy a string from one location to another in a C program. 
   Here are some examples of situations where strcpy might be used:

 * Input processing: When a user inputs a string, it is typically stored in a temporary buffer. If you need to store this string in a 
   more permanent location, you would use strcpy to copy the string from the temporary buffer to the permanent location.

 * String manipulation: If you need to modify a string, you might first copy it to a temporary buffer using strcpy, 
   make your modifications, and then copy it back to the original location.

 * Output formatting: If you need to format a string for output, you might need to concatenate multiple strings together. 
   In this case, you would use strcpy to copy the individual strings into a single buffer.

 * Memory management: If you are dynamically allocating memory for a string (using malloc or a similar function), 
   you might use strcpy to copy the contents of another string into the newly allocated memory.

 * File input/output: When reading or writing strings to a file, 
   you might use strcpy to copy the contents of a string buffer to a file or vice versa.
 */
int main()

{
	char source[] = "Codes of Gold";
	char destination[20];
	
	strcpy(destination, source);
	printf("source string: %s\n", source);
	printf("dest string: %s\n", destination);
	
	return 0;
}
