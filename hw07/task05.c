#include <stdio.h>

int get_binary(int n) 
{
	if (n < 2) {
		return n;
	}
	
	// int current_digit = n % 2;
	// int last_rec_digit = get_binary(n / 2);
	// return last_rec_digit * 10 + current_digit;
	
	return get_binary(n / 2) * 10 + n % 2;
}

void convert_to_binary(int *n)
{	
	*n = get_binary(*n);
}

int main()
{		
	int n;
	
	scanf("%d", &n);
	
	convert_to_binary(&n);
	
	printf("%d\n", n);
	
	return 0;
}
