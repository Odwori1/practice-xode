#include "main.h"

int main(void)
{
	int len, len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	len += _printf("Character:[%c]\n", 'H');
	len2 += printf("Character:[%c]\n", 'H');
	len += _printf("String:[%s]\n", "I am a string !");
	len2 += printf("String:[%s]\n", "I am a string !");
	len += _printf("Percent:[%%]\n");
	len2 += printf("Percent:[%%]\n");
	printf("len = %d\nlen2 = %d\n", len, len2);
	return (0);
}
