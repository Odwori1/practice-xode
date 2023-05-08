#include <stdio.h>

int main()
{
	int a[3][3];
	int i,j;
	int Rowsum,Colsum;
	printf("enter matrix:\n");
	for (i = 0; i < 3; i++)
	{
	    for (j = 0; j < 3; j++)
		{
		scanf("%d", &a[i][j]);
		}
		
	}
	printf("the matrix you created is:\n");
	 for (i = 0; i < 3; i++)
          {
              for (j = 0; j < 3; j++)
                  {
                  printf("%d\t", a[i][j]);
                  }
		printf("\n");
 
          }
	
	for (i = 0; i < 3; i++)
          {	
		Rowsum=Colsum=0;
              for (j = 0; j < 3; j++)
                  {
		  Rowsum = Rowsum + a[i][j];
		  Colsum = Colsum + a[j][i];
		  printf("Rowsum = %d Colsum = %d", Rowsum, Colsum);	
                  }
	}
	printf("\n");
	return 0;
}
		
