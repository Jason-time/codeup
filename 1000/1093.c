#include <stdio.h>

int main(void) {
	
	int w,h,b,c,sum,i,day;
	int a[23]={0,};
	long long int to;
	double re;
	
	scanf("%d", &w );  
	
	for(i=0;i<w;i++){
		scanf("%d",&h);
		a[h-1]++;
	}
	for(i=0;i<23;i++){
		printf("%d ",a[i]);	
		 
	} 
	
	return 0;
}
