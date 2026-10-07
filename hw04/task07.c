#include <stdio.h>

int main()
{	
	int number, max;
	
	scanf("%3d", &number);
	
	for (int i = 0; i < 3; i++) {
		int digit = number % 10;
		max = !i ? digit : max > digit ? max : digit;
			
		number /= 10;
	}
	
	printf("%d", max);
	
	return 0;
}
