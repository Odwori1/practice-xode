#include <stdio.h>
/**
 * ++ increases the value by one
 * -- decreases the value by one
 */
int main()

{
	/*int mangoes = 50;
	int eaters = mangoes++; 
	printf("%d\n", eaters);*/ // this however will print 50 since the operator only comes in effect after printing eaters
				//to add one to mangoes therefore we would have to put the operator ++ before mangoes i.e ++mangoes
	int mangoes = 50;
        int eaters = mangoes--;
        printf("%d\n", eaters);
	printf("remaining mangoes: %d\n", mangoes);





return(0);
}
