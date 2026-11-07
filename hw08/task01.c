#include <stdio.h>

#define N 5

void input_array(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
}

void print_double(double value)
{	
	printf("%.3f\n", value);
}

double get_average(int arr[], int n)
{
	int summ = 0;
	for (int i = 0; i < n; i++) {
		summ += arr[i];
	}
	
	return (double)summ / n;
}

int main()
{		
	int arr[N];
	
	input_array(arr, N);
	print_double(get_average(arr, N));
	
	return 0;
}
