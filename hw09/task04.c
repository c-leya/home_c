#include <stdio.h>

void print_digit(char s[])
{
	int digit_counters[10] = {0};
	
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			digit_counters[s[i] - '0']++;
		}
	}
	
	for (int i = 0; i < 10; i++) {
		if (digit_counters[i] != 0) 
			printf("%d %d\n", i, digit_counters[i]);
	}
}

int main(void)
{

    char str[1005];
    scanf("%1000[^\n]", str);
    
    print_digit(str);

    return 0;
}
