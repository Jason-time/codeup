#include <stdio.h>

int main(void) {
	
	int i, j;		
	int n , m ;
	
	scanf("%x", &n); 
	  for(j=1; j<=0xf; j++)
	    printf("%X*%X=%X\n", n, j,n*j);
		
	return 0;
}
