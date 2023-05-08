#include <stdio.h>

int main()

{
	int a[2][3];
	int i,j;
	int sum = 0;
	
	for (i =0; i < 2; i++) /* iteration for user to create a matrix of 2 rows and three columns*/
	{
		for(j =0; j<3; j++)
		{
		printf("enter a matrix: ");
		scanf("%d", &a[i][j]);
		}
	}
		printf("\nthe matrix you created is:\n");	
	 for (i =0; i < 2; i++)
	{
                  for(j =0; j<3; j++)
                 {
                 	printf("%d\t", a[i][j]); /*prints the matrix entered by user*/
			sum += a[i][j];

                  }
		 printf("\n");
	}
	printf("\n%d is the sum of the matrix\n", sum);/*prints sum of matrix */
	printf("\n");

	printf("below is the transpose of the above matrix:\n");

	for (i = 0; i < 3; i++) /** this shall transpose the rows to columns*/
		{
		for (j = 0; j < 2; j ++)
			{
			printf("%d\t", a[j][i]);
			}
			printf("\n");
		}
	return 0;
}
 
