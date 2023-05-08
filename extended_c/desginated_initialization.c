#include <stdio.h>

struct question
{
	int a;
	float b;
	int c;
};
int main()
{
	struct question p = {.b = 10, .c = 12, .a = 5}; /*designate initialization using '.' */
	printf("%d\n%f\n%d\n", p.a, p.b, p.c);
}
