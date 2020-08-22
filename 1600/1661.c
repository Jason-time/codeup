#include<stdio.h>
#pragma warning(disable:4996)

void main(void) {
	char ch[100];
	gets(ch);
	int i = 0;

	while (ch[i]!='\0')
	{
		if (ch[i] == ',')
			printf(" ");
		else if (ch[i] == ' ')
			printf("");
		else if (ch[i] == ';')
			puts("");
		else
			printf("%c", ch[i]);
		i++;
	}
}


