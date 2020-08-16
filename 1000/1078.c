#include <stdio.h>

int main(void) {
	int num1 ,sum=0,i;
	
	scanf("%d",&num1 );
	
	for(i=1; i <= num1; i++){
		
		if(0==i%2)sum=sum+i;
		}	 
		printf("%d",sum);
		
	return 0;
}
