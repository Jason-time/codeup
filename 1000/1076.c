#include <stdio.h>

int main(void) {
	char cha1 ,cha2='a';
	
	scanf("%c",&cha1 );
	
	do{
		printf("%c ",cha2);
		cha2++;
	}while(cha2<=cha1);
	
	return 0;
}
