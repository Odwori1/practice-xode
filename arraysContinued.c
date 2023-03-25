#include <stdio.h>

int main()

{
	int size = 5;
	int mygrade[size];

	mygrade[0] = 10;
	mygrade[1] = 20;
	mygrade[2] = 30;
	mygrade[3] = 40;
	mygrade[4] = 50;
	//for(int i = 0; i < size; i++) /* syntax form loop*/
	int i = 0;
	while(i < size) 
	{
	printf("%d\n", mygrade[i]);
	i++;
	}
	return 0;
}
