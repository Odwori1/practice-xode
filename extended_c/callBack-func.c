#include <stdio.h>
int sum(int a, int b)
{
	printf("sum = %d\n", a + b);
}
int sub(int a, int b)
{
	printf("sub = %d\n", a - b);
}
int mul(int a, int b)
{
	return a * b;
}

/* function pointer called release points to a function that takes two integer arguments*/
int release(int (*ptr)(int, int), int a, int b)
{
	(*ptr)(a,b);
}
int main()
{
	int a = 10;
	int b = 5;
	release(&sum,a, b);
	release(&sub, a,b);
	int k = release(&mul, a,b);

	printf("mul = %d\n", k);
	return 0;
}
