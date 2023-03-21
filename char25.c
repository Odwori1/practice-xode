#include <stdio.h>

int main()

{
	char character;
	printf("please enter a character here: ");
	scanf("%c", &character);
	printf("the ASCII value of %c is %d\n", character, character);

	int integer;
	printf("please enter an integer betwwen 0 - 127: ");
	scanf("%d", &integer);
	printf("ASCII value of %d is %c\n", integer, integer);
	return 0;
}
