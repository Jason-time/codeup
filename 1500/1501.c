#include <stdio.h>
int a[10001]={0,};
int n, n1,i, j, temp, min,k,cnt=0,sum1=0,sum2=0;
int main() {
    
	 
	scanf("%d", &n );
	
	for(i=1 ; i<=n*n ; i++){ 
		printf("%d ", i);
			if(0 == i%n) puts("");
	 }
    
    
    return 0;
}
