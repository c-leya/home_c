#include <stdio.h>
int main()
{
	int x, sum = 1;
	
	scanf("%3d", &x);
	
	for (int i = 0; i < 3; i++) {
		sum *= x % 10;
		x /= 10;
	}
	
	printf("%d", sum);
	
	return 0;
}
