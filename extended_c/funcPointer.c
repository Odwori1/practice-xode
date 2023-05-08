#include <stdio.h>

int sum(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int calculate(int (*operation)(int, int), int a, int b)/* operation is a pointer to sum abd sub functions*/
{
	return operation (a, b);
}
int main()
{
	int result;
	int (*fp)(int, int);
	fp = &sum;
	result = fp(5,5);
	printf("sum = %d\n", result);
	result = calculate(&sum, 6, 6);
	printf("sum using funcpointer = %d\n", result);
	return 0;
}
