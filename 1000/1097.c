 #include <stdio.h>
 
 int main(){
	int i,j,k,num,num1,num2,num3; 
	int arr1[19][19] = {0,}; 
	
	//횟수 입력 받기
	for(i=0 ; i<19;i++)
		for(j=0; j<19; j++) 
		 	scanf("%d", &arr1[i][j]   );
		 	
	scanf("%d",&num1);

	for(i=0;i<num1;i++){
	// 입력 값 만큼 좌표 입력 받기  
		scanf("%d %d",&num2, &num3);
	
	// 입력 받은 좌표 기준 행 뒤집기		
		for(j=1; j<=sizeof(arr1[num2])/sizeof(int); j++){ 
			if(0 == arr1[num2-1][j-1]) arr1[num2-1][j-1]=1;
			else arr1[num2-1][j-1] =0;
		}
	// 입력 받은 좌표 기준 열 뒤집기		
		for(j=1; j<=sizeof(arr1[num2])/sizeof(int); j++){ 
			if(0 == arr1[j-1][num3-1])   arr1[j-1][num3-1]=1;
			else arr1[j-1][num3-1] =0;
		}
	} 
	
	// 모두 출력하기
	for(i=0; i<19; i++){ 
		for(j=0; j<19; j++){  
 		 printf("%d ",arr1[i][j]);  	 
 		   }
		  printf("\n");
	}
 
 return 0;	
 }
