#include <stdio.h>

int main()

{
	int num1, num2;
	char operator;
	
	printf("choose an operator (+ - / *): ");
	scanf(" %c", &operator);
	printf("enter two numbers separated by a space: ");
	scanf("%d %d", &num1, &num2);

	switch (operator)
	{
		case '+':
			printf("%d + %d = %d", num1, num2, num1 + num2);
			break;

		case '-':
			printf("%d - %d = %d", num1, num2, num1 - num2);
			break;
		case '/':
			if (num2 == 0)
			{
			printf("error: cannot divide by zero");
			} 
			else
			{	
			
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
			}
            		break;

		case '*': 
			printf("%d * %d = %d", num1, num2, num1 * num2);
			break; 
		default:
			printf("case error");
	}
	printf("\n");
	return 0;
}
