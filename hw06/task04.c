#include <stdio.h>

int get_fx(int x)
{	
	if (x < -2) {
		return 4;
	} 
	
	if (x >= 2) {
		return x * x + 4 * x + 5;
	}
	
	return x * x;
}

int main()
{		
	int x, max_fx;
	int is_start = 1;
	
	while (1) {
		scanf("%d", &x);
		
		if (x == 0) {
			break;
		}
		
		int fx = get_fx(x);
		
		if (is_start) {
			max_fx = fx;
			is_start = 0;
		} else if (fx > max_fx) {
			max_fx = fx;
		}
	}
	
	printf("%d\n", max_fx);
	
	return 0;
}
