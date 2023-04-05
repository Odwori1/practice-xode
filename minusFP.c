#include <stdio.h>

int minus(int a, int b)
{
return a - b;
}

int main()
{
	int (*min) (int, int);
	min = &minus;
	int result;
	result = min(6, 4);
	printf("%d\n", result);
	return 0;
}
