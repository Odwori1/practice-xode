#include <stdio.h>

/*
* prints natural numbers upto 98
*/

void print_to_98(int n)
{
	int i;
	if (i <= 98) {
		for (i = n; i <= 98; i++)
		{
		printf("%d", i);
		
		if (i != 98)
		
		printf(" ,");
		}
	}
	else {
		for(i = n; i >= 98; i--)
		{
		printf("%d", i);
		
		if( i != 98) 
		printf(" ,");
		}
	}
	printf("\n");
}
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
