#include <stdio.h>
#include <windows.h>

void convert_to_hex(int integer, char *result)
{	if (integer == 0) {
		result[0] = '0';
		result[1] = '\0';
		return;
	}
	
	const int base = 16;
	const char *digits = "0123456789ABCDEF";
	
	int dividend = integer;
	char mirror_result[10];
	
	int i = 0;
	while (dividend > 0) {
		mirror_result[i] = digits[dividend % base];
		dividend = dividend / base;
		i++;
	}
	
	for (int j = 0; j < i; j++) {
		result[j] = mirror_result[i - j - 1];
	}
	
	result[i] = '\0';
}

int main()
{
	SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
	
	char result[10];
	
	convert_to_hex(12345678, result);\
	printf("12345678₁₀ = %s₁₆\n", result);
	
	convert_to_hex(1000000, result);
	printf("1000000₁₀ = %s₁₆\n", result);
	
	return 0;
}
