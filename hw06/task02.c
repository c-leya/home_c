#include <stdio.h>

int power(int n, int p)
{
	int result = 1;
	
	while (p > 0) {
		result *= n;
		p--;
	}
	
	return result;
}

int main()
{		
	int n, p;
	
	scanf("%d%d", &n, &p);
	
	printf("%d\n", power(n, p));
	
	return 0;
}
