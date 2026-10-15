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
	
	int summ = 0;
	
	for (int n = a; n <= b; n++) {
		summ += get_raised(n, 2);
	}
	
	printf("%d\n", summ);
	
	return 0;
}
