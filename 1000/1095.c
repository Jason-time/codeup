#include <stdio.h>

int main(void) {
	
	int w,h,b,c,sum,i,day;
	int a[10000]={0,};
	long long int to;
	double re;
	
	scanf("%d", &w );  
	
	for(i=0;i<w;i++){
		scanf("%d",&h);
		a[i] = h;
	}
	day=a[0];
	for(i=w-1;i>=0;i--){
		if(a[i]<day)day=a[i];
		 
	} 
		printf("%d ",day);	
	
	return 0;
}

