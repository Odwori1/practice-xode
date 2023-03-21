#include <stdio.h>
/**
 * implicit type conversion - promotion
 * 
 */
int main()

{

	float x = 65.0;

	printf("%f\n", x); //here printf takes a double 
			  //the value ox is promoted is storedc as a double.
	return 0;

}
