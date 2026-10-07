#include <stdio.h>

int main()
{
	const int NUMBERS_LENGTH = 5;
	
	int numbers[NUMBERS_LENGTH], max = 0;
	
	scanf("%d%d%d%d%d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);
	
	for (int i = 0; i < NUMBERS_LENGTH; i++) {
		max = max > numbers[i] ? max : numbers[i];
	}
	
	printf("%d\n", max);
	
	return 0;
}
