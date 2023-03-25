/*
* program replaces array element with 0 if didvisible by 2
* replaces element of array with 1 if not divisible by 2
* demo to create function that contains another function in its arguments
* int func(int arr, int size_t size, void (*func_ptr) (int, int))
*/

#include <stdio.h>

void replace_odd_even(int *array, size_t size)
{
	for(int i = 0; i < size; i++)
	{

	if (array[i] % 2 == 0)
		{
		array[i] = 0;
		}
		else
		{ 
		array[i] = 1;
		}
	} 		 
}
void print_array(int *array, size_t size)
{
	printf("[");
	for(int i = 0; i < size; i++)
{
		{
			printf("%d", array[i]);
		}
	if(i < size -1)
		{
			printf(", ");
		}
}
	printf("]");


}
void modify_array(int *array, size_t size, void(*func_ptr) (int *, size_t))
{
	if(array != NULL && func_ptr != NULL) /* checks if array and function pointer was passed */
	func_ptr(array, size); /* if the condition above is met, call func_ptr with array and size as input */


}

int main()
{
	int array[] = {2, 5, 3, 4, 6, 10};
	size_t size = sizeof(array) / sizeof(int);/* size of an array == to the total size of an array / each element in the array */
	
	modify_array(array, size, replace_odd_even);
	print_array(array, size);
	printf("\n");

}
