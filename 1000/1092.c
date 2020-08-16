#include <stdio.h>

int main(void) {
	
	int w,h,b,c,sum,i,day;
	long long int to;
	double re;
	
	scanf("%d %d %d", &w,&h,&b );  
	to =w;
 	day=1;
	while(day%w!=0 || day%h!=0 || day%b!=0) day++; 
		printf("%lld ",day);
	  
	return 0;
}
