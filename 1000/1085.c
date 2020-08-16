 #include <stdio.h>

int main(void) {
	
	int h, b, c, s;
	long long int to;
	double re;
	
	scanf("%d %d %d %d", &h, &b, &c, &s); 
	
	to = h*b;
	to *= c*s;
	re = (to/8.0)/1024;
	re = re/1024;
	  
	printf("%.1f MB",re);
	return 0;
}
