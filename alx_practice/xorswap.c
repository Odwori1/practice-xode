#include <stdio.h>
int xorswap(int a, int b, int c)
{
	
	
	printf("enter value of first number\n");
	scanf("%d", &a);
	printf("enter value of second number\n");
	scanf("%d", &b);
	printf("enter value of third number\n");
	scanf("%d", &c);
	printf(" a = %d, b = %d and c = %d\n", a, b, c);
	/*swap a with b */
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	/*swap a with c*/
	a = a ^ c;
	c = a ^ c;
	a = a ^ c;
  
	printf("after swap a = %d and b = %d and c = %d\n", a, b, c);
}
int main()
{
	int a;
	int b;
	int c;
	xorswap(a, b, c);
}
