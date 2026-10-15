#include <stdio.h>

int summ_before(int number)
{
	int result = 0;
	
	while (number > 0) {
		result += number;
		number--;
	}
	
	return result;
}

int main()
{		
	int n;
	
	scanf("%d", &n);
	
	printf("%d\n", summ_before(n));
	
	return 0;
}
