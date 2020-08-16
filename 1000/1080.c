#include <stdio.h>

int main(void) {
 	int num1,i,sum=0;
	 	i=0;
	scanf("%d",&num1 ); 
	
	 for(i=1;sum<=num1;i++){
	 	sum +=i;
		if(sum>=num1) break;	
	 }
	
	printf("%d\n",i	);
		
	return 0;
}
