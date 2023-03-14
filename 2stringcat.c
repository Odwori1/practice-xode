#include <stdio.h>
#include <string.h>

int main()
{ 	
	char new1[23] = "I ";
	char new2[] = "will ";
	char new3[] = "marry ";
	char new4[] = "you!";

	strcat (new1, new2);
	strcat (new1, new3);
	strcat (new1, new4);
	printf("%s\n", new1);
	return 0;
} 
