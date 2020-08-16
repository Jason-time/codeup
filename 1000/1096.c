#include <stdio.h>

int main(void) {
	
	int w,h,b,c,sum,i,day,j;
	int a[20][20]={0,};
	long long int to;
	double re;
	
	scanf("%d", &w );  
	
	for(i=0;i<w;i++){
		scanf("%d %d",&h,&b);
		a[h][b] = 1;
	}
 
	
	for(i=1;i<=19;i++){
		for(j=1;j<=19;j++)  
		printf("%d ",a[i][j]);	
		printf("\n");
	} 
	
	return 0;
}

