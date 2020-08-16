#include <stdio.h>
 
 int main(){
 	
	int h,w, i,j,l,d,k,num,num1,num2,num3; 
	int arr1[100][100] = {0,}; 
 	
 	scanf("%d %d", &h, &w);
 	scanf("%d", &num);
 	
 	for(i=0; i<num ; i++){
 		scanf("%d %d %d %d",&l, &d, &num1, &num2);
 		
		if(d==0){
	 		for(j=0 ; j<l ; j++){
	 			arr1[num1-1][num2-1+j] = 1;
			}
			}
			else {
					
		 		for(j=0 ; j<l ; j++){
		 			arr1[num1-1+j][num2-1] = 1;
				}	
			}
 	}
 	for(i=0 ; i<h ; i++){
 		for(j=0 ; j<w ; j++){
			printf("%d ", arr1[i][j]); 
		}
		printf("\n");
 	}
 	
	 return 0;	
 }

