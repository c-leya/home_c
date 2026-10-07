#include <stdio.h>

int main()
{		
	int a, b;
	
	scanf("%d%d", &a, &b);
	
	printf(a > b ? "Above" : a < b ? "Less" : "Equal");
	printf("\n");
		
	
	return 0;
}
