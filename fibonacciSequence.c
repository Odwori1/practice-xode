#include <stdio.h>

int main()
{

	int Num1 = 1;
	int Num2 = 1;
	printf("%d\n%d\n", Num1, Num2);

	for (int i = 0; i < 18; i++)
	{
	 	int temp = Num2;
		Num2 += Num1;
		Num1 = temp;
		printf("%d\n", Num2);
	}
	return 0;
}

