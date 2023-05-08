#include <stdio.h>

int main() 
{
  	int a[5], b[5] , sum[5], i;
  	
  	printf("enter number first array: ");
  		for (i = 0; i < 5; i++)
     		scanf("%d", &a[i]);
    	printf("enter number second array: ");
  		for (i = 0; i < 5; i++)    
    		scanf("%d", &b[i]);
  	for (i = 0; i < 5; i++)
    		{
      		sum[i]= a[i] + b[i];
      		printf("index %d array sum is %d\n", i, sum[i]);
    		}
    return 0;
}
