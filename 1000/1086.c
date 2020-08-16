#include <stdio.h>

int main(void) {
	
	int w,h,b;
	long long int to;
	double re;
	
	scanf("%d %d %d", &w, &h, &b ); 
	
	to = w*h*b;
	re = (to/8.0)/1024;
	re = re/1024;
	  
	printf("%.2f MB",re);
	return 0;
}

