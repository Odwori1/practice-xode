#include <stdio.h>

void passtring(char str1[], char str2[]);

int main()

{
	char str1[] = "Odwori";
	char str2[] = "okuku";
	passtring(str1, str2);
}
void passtring(char str1[], char str2[])
{
	int i, length = 0;
	for (i = 0; str1[i] != '\0'; i++)
	{
		length++;
	}
	printf("string length str1 is: %d\n", length);
	str2[1] = 'b';
	printf("str1 and str2 is %s %s\n", str1, str2);
}
