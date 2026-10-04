#include <stdio.h>
#include <string.h>
#include <math.h>
#include <windows.h>

int get_index_within_limits(char x, char *limits)
{
	if (x >= limits[0] && x <= limits[1]) {
		return x - limits[0];
	} 
	
	return -1;
}

int get_int_from_hex_char(char x)
{
	const int dec_base = 10;
	char *number_limits = "09";
	char *letter_limits = "AF";
	
	int integer = get_index_within_limits(x, number_limits);
	
	if (integer >= 0) {
		return integer;
	}
	
	int letter_index = get_index_within_limits(x, letter_limits);
	
	if (letter_index >= 0) {
		integer = letter_index + dec_base;
	}
	
	return integer;
} 

int convert_from_hex(char *hex) 
{
	int result = 0;
	
	const int hex_base = 16;	
	
	const int hex_length = strlen(hex);
	
	int i = 0;
	
	while (hex[i] != '\0') {
		int integer = get_int_from_hex_char(hex[i]);
		
		if (integer == -1) {
			return -1;
		}
		
		result = result + (integer * (int)pow(hex_base, hex_length - i - 1));
		i++;
	}
	
	return result;
}

int main()
{
	SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
	
	printf("12345678₁₆ = %d₁₀\n", convert_from_hex("12345678"));
	printf("1000000₁₆ = %d₁₀\n", convert_from_hex("1000000"));
	
	return 0;
}
