#include <stdio.h>

int main(void) {
	char num1  ;
	scanf("%c",&num1 );
  	
  	switch(num1){
  		case 'A':
  			printf("best!!!");
  			break;
  		case 'B':
  			printf("good!!");
  			break;
 		case 'C':
			printf("run!");
			break;
		case 'D':
			printf("slowly~");
 
			break;
 		default :
			printf("what?");
			break;
	return 0;
}
}
