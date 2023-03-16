#include <stdio.h>
#include <string.h>

int main()

{
	char source[] = "Hello world!";
	char destination[30];
	strcpy(destination, source);
	printf("source string: %s\n", source);
	printf("destination string: %s\n", destination);
	return 0;

}
