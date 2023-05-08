#include<stdio.h>

void sum(int a, int b)
{
	printf("sum = %d\n", a + b);
}
void sub(int a, int b)
{
         printf("sub = %d\n", a - b);
}
void mul(int a, int b)
{
            printf("mul = %d\n", a * b);
}
void div(int a, int b)
{
          printf("div = %d\n", a / b);
}
int main()
{
	int choice, a, b;
	void (*ptr[5])(int, int) = {sum, sub, mul, div};
	
	printf("press 0 to add\npress 1 to subtract\npress 2 to multiply\npress 3 to divide\n");
	scanf("%d", &choice);
	printf("enter two numbers: \n");
	scanf("%d %d", &a, &b);
	(*ptr[choice])(a,b);
	return 0;
}

