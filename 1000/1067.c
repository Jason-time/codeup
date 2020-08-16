#include <stdio.h>

int main(void) {
	int num1  ;
	 scanf("%d",&num1 );
 
	if(0<num1){
		printf("plus\n");
		if(0==num1%2){
			printf("even\n");
		}
		else{
			printf("odd\n");
		}
	}
		
	else {
		printf("minus\n") ;
		if(0==num1%2){
			printf("even\n");
		}
		else{
			printf("odd\n");
		}
	}
		
	
	return 0;
}
