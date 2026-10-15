#include <stdio.h>

int get_absolute(int number)
{
	return number < 0 ? number * -1 : number;
}

int main()
{		
	int a;
	
	scanf("%d", &a);
	
	printf("%d\n", get_absolute(a));
	
	return 0;
}
