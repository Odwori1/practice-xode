#include <stdio.h>
/**
 * Operator precedence in C refers to the rules that determine the order in which operators are evaluated in a C expression
 * the expression x = y = 5; is similar to y = 5; x = y;
 * what this chapter teaches us is that there is a systematic way expressions are evaluated.
 */
int main()

{
	int x, y;
	x = (y = 5);
	y = 5; 
	x = y;
	

	int z = 20;
	y = 2;
	x = -y + z;
	// x = (-y) + z; this is the operator precedence.
	printf("%d\n", x); // this evaluates to 18








	return 0;
}
