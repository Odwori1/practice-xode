#include <stdio.h>
#include <string.h>

int main()

{
	char a[20];
	int len;
	int i;
	char ch;
	
	printf("type a string\n");
	scanf("%s", a);
	printf("the string you typed is %s\n", a);
	len = strlen(a);
	printf("the string length is %d\n", len);

	/*string reverse logic*/
	for (i = 0; i < len/2; i++)
		{
			ch = a[i];
			a[i] = a[len-1-i];
			a[len-1-i] = ch;
		}
		printf("reverse is %s\n", a);
	
	return (0);		
}
	
