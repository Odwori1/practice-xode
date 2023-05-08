#include <stdio.h>

void recurssion(int n)
{
	if (n < 1) 
	return;
	
	else
	{
	printf("%d\n", n);
	recurssion(n-1);
	printf("%d\n", n);
	}
}
int main()
{
	int n = 3;
	recurssion(n);
}
