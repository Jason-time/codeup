#include<stdio.h>
#pragma warning(disable:4996)
#include<conio.h>

void main(void) {
	char ch[100];
	gets(ch);
	int i = 0;

	while (ch[i]!='\0')
	{
		if (ch[i] == ',')
			printf(" ");
		else
			printf("%c", ch[i]);
		i++;
	}
}


