#include <stdio.h>

int main()

{
	int a = 20, b = 30;
	int *p = &a, *q = &b;
	
	printf("a = %d\n", *p);
	printf("a = %d\n", a);
	printf("b = %d\n", *q);
	printf("b = %d\n", b);
	printf("address of a is %p\n", p);
	printf("address of a is %p\n", &a);
	printf("address of b is %p\n", q);
	printf("address of b is %p\n", &b);
	
	int **k;
	k = &p;
	printf("value of k is value of a:%d\n", **k);/* **k is a double pointer to *p which is a pointer to a*/
	printf("address of k is %p\n", k);
	return 0;
}
