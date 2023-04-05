#include <stdio.h>

int div(int a, int b)
{
return a / b;
}

int main()
{
	int (*ptr) (int, int);
	ptr = &div;
	int result;
	result = ptr(5, 5);
	printf("%d\n", result);
	return 0;
}
