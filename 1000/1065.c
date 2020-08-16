#include <stdio.h>

int main(void) {
	int num1, num2, num3;
 scanf("%d %d %d",&num1,&num2,&num3);
 
	if(0==num1%2)
		printf("%d\n",num1);
 	if(0==num2%2) printf("%d\n",num2);
  	if(0==num3%2) printf("%d",num3);
	
	return 0;
}
