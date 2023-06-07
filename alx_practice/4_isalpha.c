#include <stdio.h>
char _isalpha(char c)
{
if (c >= 'a' && c <= 'z')
	{
	printf("this is a lower case character\n");
	}
else if (c >= 'A' && c <= 'Z')
	{
	printf("this is an upper case character\n");
	}
else 
	{
	printf("enter a letter of the alphabet\n");
	}
return (0);
}
int main()
{
char c;
printf("please enter a letter of the alphabet\n");
while (scanf(" %c", &c)==1)
{
	if(_isalpha(c))
	return (0);
	break;
	printf("please enter a letter of the alphabet\n");
}
return (1);
}
