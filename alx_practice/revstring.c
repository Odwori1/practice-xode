#include <stdio.h>
void print_rev(char *s)
{
if (s == NULL)
{
printf("no string found\n");
}
int length = 0;
while (s[length] != '\0')
{
	length++;
}
int i;
for(i = length; i >= 0; i--)
{
	putchar(s[i]);
}
putchar('\n');
}
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
	
