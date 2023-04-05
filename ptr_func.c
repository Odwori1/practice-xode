#include <stdio.h>
/*below is a function which we shall turn into a pointer function*/
//void changeNums(int num1, int num2)
void changeNums(int *Pnum1, int *Pnum2) /*this is now a pointer function*/
{
	printf("changeNums() num1:%d num2:%d\n", *Pnum1, *Pnum2);
	/*num1 = 33;
	num2 = 45; we can use the pointer to derefrence the variables num1, num2*/
	*Pnum1 = 33;
	*Pnum2 = 45;
	
	printf("changeNums() num1:%d num2:%d\n", *Pnum1, *Pnum2);
	
}

int main()

{

	int num1 = 5;
	int num2 = 8;
	printf("main() num1:%d num2:%d\n", num1, num2);
	
	/*changeNums(num1, num2); this is how we call a function*/

	changeNums(&num1, &num2);//here we call a pointer function
 
	printf("main() num1:%d num2:%d\n", num1, num2);


	return 0;
}
