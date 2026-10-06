#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8"); 
	
	int a, b, c;
	
	printf("Введите три целых числа, чтобы получить их сумму:\n");
	
	int input_length = scanf("%d%d%d", &a, &b, &c); 
	
	if (input_length != 3) {
		printf("Введены некорректные значения!\n");
		return 0;
	}
	
	printf("%d+%d+%d=%d\n", a, b, c, a + b + c);
	
	return 0;
}
