#include <stdio.h>
/**
 * a factorial of an integer is the product of all positive integers less than a given variable
 * the factorial of 5 would therefore be written as: factorial 5 = 5*4*3*2*1; which gives us 120.
 * a factorial expression in c is written like this // 5! = 5*4*3*2*1
 * identify the need to use a function before creating it
 * the function below demonstrates a function to calculate a factorial of any given number.
 * the fast part of this code from int factorial to return factorial is the function we created
 * the second part from int main to return 0; the function is being called
 * the last part which is commented out is how we would calculate factorial of a sinle number without creating a special function.
 */
	int factorial(int number)
	
	{
	int factorial = 1;
	
	 for(int i = number; i > 1; i--)
         {
                 factorial *= i;
          } 


	return factorial;
	}

int main()

	{
	int five = factorial(5);
	
	printf("the factorial of five is %d\n", five);

	return 0;
	}	

/**
{
	int number = 5;
	int factorial = 1; // factorial is initialized to 1 because 1 is the lowest number 5 can be multiplied by and not change its value
	
	for(int i = number; i > 1; i--)
	{
		factorial *= i; // this is similar to typing factorial = fatorial * i;
	}
	printf("the factorial of %d is %d\n", number, factorial); // this prints the factorial of 5 which we initialized
								  // therefore we need a function that calculates factorial any number.



	return (0);
}
*/
