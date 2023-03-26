#include "main.h"

int main(void)
{
	int len, len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("len = %d\nlen2 = %d\n", len, len2);
	return (0);
}
