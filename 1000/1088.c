#include <stdio.h>

int main(void) {
	
	int w,h,b,sum;
	long long int to;
	double re;
	
	scanf("%d", &w); 
	sum=1;
	for(h=0; h<=w; h++){
		 
		if(0==h%3)continue;	
		printf("%d ",h);
	}
	  
	return 0;
}
