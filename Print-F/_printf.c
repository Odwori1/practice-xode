#include "main.h"



int _printf(const char *format,...)
{ 
	va_list head;
	int i = 0;
	
	va_start(head, format);
	while (format[i] != '\0')
	{
		

		_putchar(format[i]);
		i++;
	}
	va_end(head);
	return (i);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
