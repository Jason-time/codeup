#include <stdio.h>

int main(void) {
	int num1  ;
reload:


	scanf("%d",&num1 );
	if(0==num1)
		goto exit;
	else{
		printf("%d\n",num1);
		goto reload;
	}

exit:
	return 0;
}


