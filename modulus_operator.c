#include <stdio.h>
/** 
* the modulus operator gives you the remainder (for integers)
* the modulus operator only works with integers because doubles and floats don't return a remainder
*/
int main()

{
	int numberOfbrides = 5;
	int numberOfgrooms = 2;
	int numberOfcouples = numberOfbrides % numberOfgrooms;

	printf("%d\n", numberOfcouples);
	
	/** the modulus operator also helps us to know wether a number is odd or even
	 * odd numbers typically return 1
	 * even numbers return 0
	 * eg 7 % 2 = 1 and 8 % 2 = 0
	 */




return(0);
}
