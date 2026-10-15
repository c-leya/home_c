#include <stdio.h>

void print_digits_before(int n)
{	
	if (n > 1) {
		print_digits_before(n - 1);
		printf(" ");
	}
	
	printf("%d", n);
}

int main()
{		
	int n;
	
	scanf("%d", &n);
	
	print_digits_before(n);
	
	printf("\n");
	
	return 0;
}
