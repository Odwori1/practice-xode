#include <stdio.h>
#include <limits.h>
#include <ncurses.h>

int main()

{
	printf("range of short int = %d to %d\n", SHRT_MIN, SHRT_MAX);
	printf("range of unsigned int is 0 to %u\n", UINT_MAX);

	initscr();
	int key = getch();
	printf("you pressed the key with code %d\n", key);
	endwin();
	return 0; 
}
