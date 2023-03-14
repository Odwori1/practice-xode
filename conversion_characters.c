#include <stdio.h>

int main()
{	
	printf("How many dogs do you have: ");
	double dogs;

	scanf("%lf", &dogs); //scanf uses %lf as format identifier for double
	printf("%f\n%e\n%g\n", dogs, dogs, dogs); //simply uses %f for format identifier

	/*
	conversion characters
	
	%f - decimal notation
	%e - scientific notation
	%g - allows computer decides which notation to use depending on the size of the exponent
	     if the exponent is < -4 or > 5 it will put it in scientific notation otherwise it will put it in decimal notation.  




				*/
	return(0);
}
