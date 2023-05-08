#include <stdio.h>

//char fun();/*decalaration or prototype of function*/
void main()
{
	char fun();/* you can declare function/prototype within main function*/
	char ch;
	ch = fun();/*calling function*/
	printf("ch is %c\n", ch);
}
char fun() /*defining function*/
{
	char d;
	printf("enter a character\n");
	scanf("%c", &d);
	return d;
}
