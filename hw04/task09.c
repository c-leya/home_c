#include <stdio.h>

int main()
{	
	int a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);
	
	printf(a >= b || b >= c ? "NO" : "YES");
	printf("\n");
	
	return 0;
}
