#include <stdio.h>

int main()

{
	int i = 2;
	int j = 1;

	while (j <= 12)
	{
	  int pro = i * j;
	  printf("%d * %d = %d\n", i, j, pro);
	  j++;
	}
	return 0;
}
