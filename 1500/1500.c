#include <stdio.h>
int a[10001]={0,};
int n, n1,i, j, temp, min,k,cnt=0,sum1=0,sum2=0;
int main() {
    
	 
	scanf("%d %d", &n,&n1 );
	
	for(i=1 ; i<=n*n1 ; i++){ 
		scanf("%d", &a[i]); 
	 }
     
	 
	for(i=1 ; i<=n*n1 ; i++){ 
		printf("%d ", a[i]);
		if(0 == i%n1) puts("");
	 }
    
    
    return 0;
}
