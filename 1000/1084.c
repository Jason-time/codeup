#include <stdio.h>

int main(void) {
	
	int i, j,k;		
	int n1,n2,n3,cnt=0;
	
	scanf("%d %d %d", &n1,&n2,&n3); 
	
	for(i=0; i< n1; i++){
		for(j=0; j< n2; j++){
			for(k=0; k< n3; k++) {
			printf("%d %d %d\n",i,j,k);
			cnt++;
		}
	}
}
		printf("%d",cnt);
	return 0;
}
