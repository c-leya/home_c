#include <stdio.h>

int get_digits_summ(int number)
{
	int summ = 0;
	
	while (number > 0) {
		summ += number % 10;			
		number /= 10;
	}
	
	return summ;
}

int main()
{		
	int a;
	
	scanf("%d", &a);
	
	printf("%d\n", get_digits_summ(a));
	
	return 0;
}
