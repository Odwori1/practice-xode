#include <stdio.h>
#include <string.h>

int main()

{
	FILE *fp;
	char ch[30] = "Welcome to mother earth Baraka";
	fp = fopen("abc.txt", "w");
	int i;
	for(i = 0; i != strlen(ch); i++)
	fputc(ch[i], fp);
	fclose(fp);
}
