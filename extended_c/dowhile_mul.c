#include <stdio.h>

int main()

{
	int i = 2;
	int j = 1;
	int mul;
	
	do
	{
	mul = i * j;
	printf("%d * %d = %d\n", i, j, mul);
	j++;
	}
	while (i == 2 && j <= 12);
	return 0;
}

