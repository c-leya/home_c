#include <stdio.h>

int get_raised(int number, int power)
{	
	int result = 1;
	
	while (power > 0) {
		result *= number;
		power--;
	}
	
	return result;
}

int main()
{	
	int a, b;
	
	scanf("%d%d", &a, &b);
	
	for (int number = a; number <= b; number++) {
		printf("%d", get_raised(number, 2));
		printf(number == b ? "\n" : " ");
	}
	
	return 0;
}
