#include <stdio.h>
void jack_bauer(void)
{
	int hour, minute;
	for (hour = 0; hour <= 23; hour++)
		{
		for(minute = 0; minute <= 59; minute++)
		{
		printf("%.2d:%.2d\n", hour, minute);
		}
		}
}
int main(void)
{
	jack_bauer();
	return 0;
}
