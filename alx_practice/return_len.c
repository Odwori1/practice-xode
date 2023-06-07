#include <stdio.h>
int _strlen(char *s)
{

/*int i = 0;
for(; *s!='\0'; s++)
{
	i++;
}
return (i);
*/
int length = 0;
while (s[length] != '\0')
{
	length++;
}
return (length);
}
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
