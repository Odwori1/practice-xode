#include <stdio.h>

void sum()
{
	int a,b,sum=0;
	printf("enter two numbers:\n");
	scanf("%d%d", &a,&b);
	sum = a + b;
	printf("sum of %d + %d = %d\n", a, b, sum);
}
int main()
{
	sum();
	printf("Hello sum\n");
	sum();
	printf("function works sums\n");
	sum();
}
