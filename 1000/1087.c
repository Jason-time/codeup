#include <stdio.h>

int main(void) {
	
	int w,h,b,sum;
	long long int to;
	double re;
	
	scanf("%d", &w); 
	sum=0;
	for(h=0; sum<=w; h++){
		sum +=h;
		if(sum>=w)break;	
	}
	  
	printf("%d",sum);
	return 0;
}

