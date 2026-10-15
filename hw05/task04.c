#include <stdio.h>

int has_amount_of_digits(int number, int amount)
{	
	int digits_counter = 0;
	
	while (number > 0) {
		if (digits_counter > amount) {
			break;
		}
			
		number /= 10;
		digits_counter++;
	}
	
	return digits_counter == amount;
}

int main()
{	
	int a;
	
	scanf("%d", &a);
	
	printf(has_amount_of_digits(a, 3) ? "YES" : "NO");
	printf("\n");
	
	return 0;
}
