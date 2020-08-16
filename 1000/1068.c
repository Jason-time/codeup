#include <stdio.h>

int main(void) {
	int num1  ;
	scanf("%d",&num1 );
  	
  	if(90<=num1)printf("A");
	else  	if(70<=num1)printf("B"); 
	else  	if(40<=num1)printf("C");  
	else printf("D");
	
	return 0;
}
