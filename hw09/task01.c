#include <stdio.h>
#include <locale.h>

#define MAX_SIZE 20

int input_size(int *size, int max_size)
{
    if (scanf("%d", size) != 1) return 1;
    if (*size < 1) *size = 1;
    if (*size > max_size) *size = max_size;
    
    return 0;
}


int input_array(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1)  return 1;
    }
    
    return 0;
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort_array(int size, int a[])
{
	const int last_index = size - 1;
    int sorted_indexes = 0;
    while (sorted_indexes < last_index) {
		int last_not_sorted_index = last_index - sorted_indexes;
		int current_index = 0;
		while (current_index < last_not_sorted_index) {
			int next_index = current_index + 1;
			if (a[current_index] > a[next_index]) {
                int temp = a[current_index];
                a[current_index] = a[next_index];
                a[next_index] = temp;
            }
			current_index++;
		}
		sorted_indexes++;
	} 
}

int main(void)
{
    setlocale(LC_ALL, ".UTF8");

    int size;
    printf("Введите длину массива от 1 до %d:\n", MAX_SIZE);
    if (input_size(&size, MAX_SIZE) == 1) {
		printf("Некорректный ввод\n");
        return 1;
	}
	printf("Длина массива: %d\n", size);

    int a[size];
    printf("Введите массив из %d чисел через пробел:\n", size);
    if (input_array(a, size) == 1) {
		printf("Некорректный ввод\n");
		return 1;
	}
	printf("Введённый массив: ");
    print_array(a, size);


    sort_array(size, a);

    printf("Числа массива по возрастанию: ");
    print_array(a, size);

    return 0;
}
