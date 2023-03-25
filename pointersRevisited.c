#include <stdio.h>

int main()

{
	int boys = 20; /*declaration and initialization of a int variable*/
	int *b = &boys;/*declaration of a pointer to a int variable 
			this is also called derefrencing */
	printf("number of boys using int variable: %d\n", boys);
	printf("number of boys using pointer to int variable: %d\n", *b);
	
	*b = 25;/* this will change the value of variable boys from 20 to 25
		a more vivid example of derefrencing*/
	
	printf("number of boys using int variable: %d\n", boys);	/* printf outputs new value 25*/
	printf("number of boys using pointer to int variable: %d\n", *b);

	boys++;
	(*b)++;/*parenthesis here takes care of operator precedence and ensure ++ operator
		does the increment instead of *(b++); which would be machine interpretation for *b++ expression*/
	printf("number of boys using int variable: %d\n", boys);	
	printf("number of boys using pointer to int variable: %d\n", *b);
	return 0;
}
