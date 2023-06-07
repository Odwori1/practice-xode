#include <stdio.h>

void set(int *a)
{
	*a = 10;/*derefrences variable and assigns it a value 10 when called*/
	printf("set variable a to %d\n", *a);
}
int main()
{
	int a = 5;
	printf("initial value of a: %d\n", a);
	int *ptr = &a;
	
	set(ptr);/*this calls set function and accesses the value 10 which is derefrenced in the func */
	printf("value of a after set call: %d\n", a);
	return 0;
}
