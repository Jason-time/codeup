int main(void) {

	int num=0,i = 0, j = 0, nInput = 0, nCounter = 0,nFlag=1;
	int array[51][51] = { 0 };
	scanf("%d", &nInput);

	for (i = 0;i < nInput;i++) {
		if (nFlag) {
			for (j = 0;j < nInput;++j) {
				array[i][j] = ++nCounter;
				nFlag = 0;
			}
		}
		else {
			
		for (j = 0;j < nInput;j++)
			array[i][nInput-1-j] = ++nCounter;
		nFlag = 1;
		}
	}

	for (i = 0;i < nInput;i++)
	{
		for (j = 0;j < nInput;j++) {
			printf("%d ", array[i][j]);
		}
			putchar('\n');
	}
	return 0;
}
