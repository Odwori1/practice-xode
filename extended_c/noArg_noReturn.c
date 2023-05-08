#include <stdio.h>

void sum(void);
void div(void);
void mul(void);
void sub(void);

int main()
{
	char operator;
	printf("choose an operator (+ - / *): ");
        scanf(" %c", &operator);
	switch(operator)
	{
	case '+':
		sum();
		break;
	case '/':
		div();
		break;
	case '*':
		mul();
		break;
	case '-':
		sub();
		break;
	default:
		printf("invalid input\n");
		break;
	}
	return 0;
}
void sum(void)
{
	int a, b, sum =0;
	
	printf("enter two numbers\n");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum of %d + %d = %d\n", a, b, sum);
}
void div(void)
{
	
	int a, b, div =0;
	
	printf("enter two numbers\n");
	scanf("%d %d", &a, &b);
	if (b == 0)
	{
	printf("error: cannot divide by zero.\n");
	return;
	}
	div = a / b;
	printf("div of %d / %d = %d\n", a, b, div);
}
void mul(void)
{
	
	int a, b, mul =0;
	
	printf("enter two numbers\n");
	scanf("%d %d", &a, &b);
	mul = a * b;
	printf("mul of %d * %d = %d\n", a, b, mul);
}
void sub(void)
{
	
	int a, b, sub =0;
	
	printf("enter two numbers\n");
	scanf("%d %d", &a, &b);
	sub = a - b;
	printf("sub of %d - %d = %d\n", a, b, sub);
}
