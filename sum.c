#include <stdio.h>

int sum(int a, int b)
{

return a + b;
}
int mul(int c, int d)
{
return c * d;
}
float div(float e, float f)
{
return e / f;
}
int main()

{
	int a = 3;
	int b = 5;
	int z = sum(a, b);
	printf("sum of a + b is: %d\n", z);
	
	int c = 5;
	int d = 5;
	int k = mul(c, d);
	printf("product of c * d is: %d\n", k);	

	float e = 5.0;
	float f = 2.0;
	float h = div(e, f);
	printf("e divided by f is: %f\n", h);
	return 0;
} 
