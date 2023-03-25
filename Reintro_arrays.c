#include <stdio.h>

int main()
{
	int myGrades[10];/*myGrades is an array containing 10 elements*/
	myGrades[0] = 13;/* 0 is considered to be the first element in an array therefore [0] refers to the first element
			    in an array*/
	myGrades[1] = 14;
	
	int x = myGrades[1] + 33;/*adds 14 to 33*/
	printf("%d\n", x);


	return 0;
}
