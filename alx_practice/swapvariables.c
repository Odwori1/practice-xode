#include <stdio.h>
void swapstuff(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
 printf("a = %d b = %d\n", *a, *b);

}
int main()
{
	int a = 50;
	int b = 100;
	swapstuff(&a, &b);
	//printf("a = %d b = %d\n", a, b);
	return 0;
}
