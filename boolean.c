#include <stdio.h>
#include <stdbool.h>
/**
* boolean uses a special library <stdbool.h>
* bool inputs and outputs integers therefore it uses the %d or %i format identifier
* bool is a two state function
* prints 0 if statement is false or 1 if statement is true
*/
int main()

{
	bool myWeight = true;
	printf("I have lost weight %d\n ", myWeight);
	return(0);

}
