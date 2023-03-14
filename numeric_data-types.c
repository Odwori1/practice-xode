#include <stdio.h>
/**
* the three major data types are int, double and float
* double and float are more less the same except double is a more precise data type when dealing with bigger numbers
* scientific notations
*/
int main()

{ 
	int dogs = 2.5e4; /*this is a scientific notation representation of 25000: 'e' here is shortform of x10
				    '4' then is the power. so it is 2.5 * 10^4 */ 
	printf("%d\n", dogs);
	return(0);
}
