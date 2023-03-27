#include "main.h"



int _printf(const char *format,...)
{ 
	va_list head;
	int i = 0, counter = 0;
	
	va_start(head, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
		switch (format[i + 1])
		{
			case 'c':
				counter += _putchar(va_arg(head, int));
				i += 2;
				break;
			case 's':
				counter += _puts(va_arg(head, char *));
				i += 2;
				break;
			case '%':
				counter += _putchar('%');
				i += 2;
				break;
		}
		
		continue;
		
		}		

		counter += _putchar(format[i]);
		i++;
	}
	va_end(head);
	return (counter);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	_putchar(s[i]);
	i++;
	}
	return (i);
}
