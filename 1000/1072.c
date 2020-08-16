#include <stdio.h>

int main(void) {
	int num1,num2  ;
	scanf("%d",&num1 );
	reget:
		
	scanf("%d",&num2 );
 		printf("%d\n",num2);
 		
	if(--num1!=0)goto reget;
  
	return 0;
}
