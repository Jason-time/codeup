#include <stdio.h>

int main(void) {
	
	int i, j;		
	int n , m ;
	
	scanf("%x", &n); 
	  for(j=1; j<=n; j++){
	  if(0==j%3)printf("X ");
	    else printf("%d ", j);
	}
	return 0;
}
