#include <stdio.h>

int mul(int a, int b)
{
return a * b;
}

int main()
{
	int (*ptr) (int, int);
	ptr = &mul;
	int result;
	result = ptr(2, 5);
	printf("%d\n", result);
	return 0;
}
