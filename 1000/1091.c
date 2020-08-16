#include <stdio.h>

int main(void) {
	
	int w,h,b,c,sum,i;
	long long int to;
	double re;
	
	scanf("%d %d %d %d", &w,&h,&b,&c);  
	to =w;
	for(i=0; i< c-1; i++){
		to *=h;
		to +=b;
	}
		printf("%lld ",to);
	  
	return 0;
}
