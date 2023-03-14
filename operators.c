#include <stdio.h>
/**
* In this chapter we look at the four main operators + _ / *
* We shall also demonstrate the concept of operator precedence which is a mathematical arrangement of the order of opretors if they appear in the same problem
*/
int main()

{
	int x = 2 + 3 * 4 / 3 - 2; // using operator precedence * and / happen first, followed by + and -

	x = (2 + ((3 * 4) / 3)) - 2; // using brackets we are able to group operators according to their precedence
	printf("%d\n", x);	 
	




	return(0);

}
