#include <stdio.h>

void print_numbers_before(int n)
{	
	if (n > 1) {
		print_numbers_before(n - 1);
		printf(" ");
	}
	
	printf("%d", n);
}

int main()
{		
	int n;
	
	scanf("%d", &n);
	
	print_numbers_before(n);
	
	printf("\n");
	
	return 0;
}
