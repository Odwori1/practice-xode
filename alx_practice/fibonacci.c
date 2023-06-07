#include <stdio.h>

void fibonacci()
{
int curr = 1, prev = 0, next;
printf("%d ", curr);
while (curr <= 50)
{
	next = prev + curr;
	printf("%d ", next);
	prev = curr;
	curr = next;
	}
	printf("\n");
}
int main()
{
	fibonacci();
	return 0;
}
