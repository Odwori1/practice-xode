#include <stdio.h>

int avg(int marks[], int size);

int main()
{
	int marks[5];
	int average;
	printf("enter array of 5 elements\n");
	int i;

	for(i = 0; i < 5; i++)
		{
		scanf("%d", &marks[i]);
		}
	int size = sizeof(marks)/sizeof(marks[i]);
	average = avg(marks, size);
	printf("average = %d\n", average);
}
int avg(int marks[], int size)
{
	int sum = 0;
	int average;
	
	int i;


	for (i = 0; i < size; i++)
		{
		sum += marks[i];
		}
	average = sum / size;
	return average;
}
