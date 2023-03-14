#include <stdio.h>
/*
* main - main entry point of the program
* this program shall calculate the radius of a circle
* a new function 'scanf' is introduced
* address of operator aka '&' is introduced
*/
int main()
{
	int radius; //distance from outside to the centre of a circle

	printf("please enter a radius:"); //this is a prompt message to tell user what to do
	scanf("%d", &radius); //scanf allows user to input any value of choice
	double area = 3.14159 * (radius * radius);

	printf("the area of a circle with %d radius is %f\n", radius, area); //while scanf reads input, printf shall return output
	return(0);
}
