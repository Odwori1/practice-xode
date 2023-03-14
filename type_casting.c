#include <stdio.h>

int main()
{	
	printf("number of eggs laid:"); 
	int eggs;

	scanf("%d", &eggs);

	double dozen = (double) eggs / 12;
	printf("you have %f dozen eggs", dozen);
	printf("\n");
	return(0);
}
