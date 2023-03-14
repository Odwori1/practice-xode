#include <stdio.h>

int main()

{
	int pizzasToeat = 100;

	printf("%d\n", pizzasToeat);

	pizzasToeat += 100; // this is similar to typing pizzasToeat + pizzasToeat
	printf("%d\n", pizzasToeat);
	pizzasToeat -= 100; //this will subtract 100 from the variable pizzasToeat
	printf("%d\n", pizzasToeat);
	pizzasToeat *= 5; // multiplies variable by 5
	printf("%d\n", pizzasToeat);
	pizzasToeat /= 6; // divides variable by 6
	printf("%d\n", pizzasToeat);
	pizzasToeat %= 3; // returns remainder after dividing 100/3 
	
	printf("%d\n", pizzasToeat);
	return 0;
}
