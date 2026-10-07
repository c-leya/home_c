#include <stdio.h>

int choose_max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int a, b, c, max = 0;
	
	scanf("%d%d%d", &a, &b, &c);
	
	max = choose_max(max, a);
	max = choose_max(max, b);
	max = choose_max(max, c);
	
	printf("%d\n", max);
	
	return 0;
}
