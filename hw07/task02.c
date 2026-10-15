#include <stdio.h>

int get_digits_summ(int n)
{	
	if (n == 1) {
		return n;
	}
	
	return n + get_digits_summ(n - 1);
}

int main()
{		
	int n;
	
	scanf("%d", &n);
	
	printf("%d\n", get_digits_summ(n));
	
	return 0;
}
