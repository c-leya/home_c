#include <stdio.h>

int main()
{
	const int NUMBERS_LENGTH = 5;
	
	int numbers[NUMBERS_LENGTH];
	
	scanf("%d%d%d%d%d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);
	
	int min = numbers[0];
	
	for (int i = 0; i < NUMBERS_LENGTH; i++) {
		min = min < numbers[i] ? min : numbers[i];
	}
	
	printf("%d\n", min);
	
	return 0;
}
