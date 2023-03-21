#include <stdio.h>
/**
 * A pointer is a variable that stores the memory of another variable
 */
int main()

{
	int points = 45;//declare and initialize a variable
	int* ptr = &points;//declare a variable pointer

	printf("points: %d\n", points); //prints value of int variable
	printf("address: %p\n", &points);//prints address of int variable
	printf("dereference: %d\n", *ptr);
	return 0;
}
