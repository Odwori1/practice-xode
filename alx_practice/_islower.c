#include <stdio.h>
int main()
{
char c;
printf("enter a character\n");
scanf("%s", &c);
if(c >= 'a' && c <= 'z')
{
	printf("%c is lower case\n", c);
}
else if (c >= 'A' && c <= 'Z')
{
printf("%c is upper case\n", c);
}
else
{
printf("invalid input\n");
}

return (0);
}
