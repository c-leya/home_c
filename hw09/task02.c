#include <stdio.h>
#include <locale.h>

#define MAX_SIZE 100

int input_size(int *size, int max_size)
{
    if (scanf("%d", size) != 1) return 1;
    if (*size < 1) *size = 1;
    if (*size > max_size) *size = max_size;
    
    return 0;
}


//~ int input_array(int arr[], int n)
//~ {
    //~ for (int i = 0; i < n; i++) {
        //~ if (scanf("%d", &arr[i]) != 1)  return 1;
    //~ }
    
    //~ return 0;
//~ }

int input_array(int *arr, int n)
{
    for (int *p = arr; p < arr + n; p++) {
        if (scanf("%d", p) != 1) return 1;
    }
    return 0;
} 

//~ void print_array(int arr[], int n)
//~ {
    //~ for (int i = 0; i < n; i++) {
        //~ printf("%d ", arr[i]);
    //~ }
    //~ printf("\n");
//~ }

void print_array(int *arr, int n)
{
    for (int *p = arr; p < arr + n; p++) {
        printf("%d ", *p);
    }
    printf("\n");
}

//~ void sort_even_odd(int n, int a[])
//~ {
	//~ int temp[n];
	//~ int temp_index = 0;
	
	//~ for (int i = 0; i < n; i++) {
		//~ if (a[i] % 2 == 0) temp[temp_index++] = a[i];
	//~ }
		
	//~ for (int i = 0; i < n; i++) {
		//~ if (a[i] % 2 != 0) temp[temp_index++] = a[i];
	//~ }
	
	//~ for (int i = 0; i < n; i++) {
		//~ a[i] = temp[i];
	//~ }
//~ }

void sort_even_odd(int n, int *a)
{
    int temp[n];
    int *temp_p = temp;

    for (int *p = a; p < a + n; p++) {
        if (*p % 2 == 0) *temp_p++ = *p;
    }

    for (int *p = a; p < a + n; p++) {
        if (*p % 2 != 0) *temp_p++ = *p;
    }

    for (int i = 0; i < n; i++) {
        a[i] = temp[i];
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


    sort_even_odd(size, a);

    printf("Отсортированный массив: ");
    print_array(a, size);

    return 0;
}
