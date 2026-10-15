#include <stdio.h>

void print_digits_backwards(int n)
{	
	
	printf("%d", n % 10);
	if (n >= 10) {
		printf(" ");
		print_digits_backwards(n / 10);
	}
}

int main()
{		
	int n;
	
	scanf("%d", &n);
	
	print_digits_backwards(n);
	printf("\n");
	
	return 0;
}
