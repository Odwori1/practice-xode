#include <stdio.h>

int main()
{
char arr[] = "hello";

char *ptr = arr;
int size = sizeof(arr) / sizeof(char);
	printf("the size of this array is %d\n", size);
int i;
	for (i = 0; i < size -1; i++)
		{
		printf("address of arr[%d] = %p\n", i, ptr + i);
		}
	for (i = 0; arr[i] != '\0'; i++)
		{
		printf("character at arr[%d] = %c\n", i , arr[i]);
		}
	return 0;
}
