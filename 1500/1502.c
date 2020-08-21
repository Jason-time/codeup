#include <stdio.h>
 #pragma warning(disable:4996)

int main(void) {

	int num=0,i = 0, j = 0, nInput = 0, nCounter = 0;
	int array[51][51] = { 0 };
	scanf("%d", &nInput);

	for (i = 0;i < nInput;i++) {
		for (j = 0;j < nInput;j++)
			array[j][i] = ++nCounter;
	}

	for (i = 0;i < nInput;i++)
	{
		for (j = 0;j < nInput;j++) {
			printf("%d ", array[i][j]);
		}
		if (0 == num++%nInput ) {
			putchar('\n');
			num = 0;
		}
	}
	return 0;
}
