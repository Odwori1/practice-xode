#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *ptr;
	char ch;
	ptr = fopen("abc.txt", "r");
	if (ptr == NULL)
	{
	printf("file not found");
	exit(1);
	}
	while (!feof (ptr))
	{
	
	ch = fgetc(ptr);
	printf("%c", ch);
	
	}
	
	fclose(ptr);
printf("\n");

}
	
	

