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

void print_raised_row_before(int number, int final_power)
{
	for (int power = 1; power <= final_power; power++) {
		printf("%d", get_raised(number, power));
		printf(power == final_power ? "\n" : " ");
	}
}

int main()
{	
	int a;
	
	scanf("%d", &a);
	
	for (int number = 1; number <= a; number++) {
		print_raised_row_before(number, 3);
	}
	
	return 0;
}
