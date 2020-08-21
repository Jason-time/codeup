void myswap(int *num1,int *num2){
	int tmp;
	if(*num1>*num2){
		tmp = *num1;
		*num1=*num2;
		*num2=tmp;
	}
}

