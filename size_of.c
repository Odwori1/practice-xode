#include <stdio.h>

int main()

{
	int a;
	float b;
	char c;
	double d;
	
	printf("size of int: %lu\n", sizeof a);
	printf("size of float: %lu\n", sizeof b);
	printf("size of char: %lu\n", sizeof c);
	printf("size of double: %lu\n", sizeof d);
	printf("address of int: %p\n", &a);
	printf("address of float: %p\n", &b);
	printf("address of char: %p\n", &c);
	printf("address of double: %p\n", &d);
	
	return 0;
}
