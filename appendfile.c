#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
	FILE *ptr;
	char str[70];
	ptr = fopen("abc.txt", "a");
	if (ptr == NULL)
	{
	printf("file not found");
	exit (1);
	}

	printf("amend file");
	fgets(str, sizeof(str), stdin);

	fprintf(ptr, "\n%s", str);
	printf("file amended succesfully");

	fclose(ptr);
}
