#include <stdio.h>

int main()
{	
	int const column = 3;/*variable column is initialized to a const 3 which means the columns cannot be changed
			     this is a dynamic array of 2 rows and three columns */
	int const row = 2;
	int grades[2][3] = {
	  {10, 20 ,30},
	  {50, 60, 70}
	};
	for (int i = 0; i < row; i++)
	{
	for(int j = 0; j < column; j ++)
	{
		printf("%d ", grades[i][j]);
	}
		printf("\n");
	}


	return 0;
}
