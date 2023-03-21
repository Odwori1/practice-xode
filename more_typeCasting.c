#include <stdio.h>
/**
 * here we are dealimg with explicit type casting
 */
int main()

{
	int apples = 15;
	int people = 2;
	double splitApples = (double) apples / people; //note that double has a higher precednce than / so we dont't need a parenteses around apples and people.

	printf("%f\n", splitApples);
	printf("value of apples: %d (%d\n)", apples, apples);

	return 0;
}
