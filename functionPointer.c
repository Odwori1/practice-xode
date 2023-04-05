#include <stdio.h>

int sum(int a, int b)
{
return a + b;
}


int main()
{

	int (*sums) (int, int);
	sums = &sum;
	
	
	int result = sums(5, 5);
	printf("%d\n", result);
return 0;
}


