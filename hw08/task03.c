#include <stdio.h>

#define N 10

void input_array(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
}

void set_limits(int arr[], int n, int *max_value, int *max_value_index, int *min_value, int *min_value_index)
{
	*max_value = arr[0];
	*max_value_index = 0;
	*min_value = arr[0];
	*min_value_index = 0;
	
	for (int i = 1; i < n; i++) {
		if(*max_value < arr[i]) {
			*max_value = arr[i];
			*max_value_index = i;
		}
		if (*min_value > arr[i]) {
			*min_value = arr[i];
			*min_value_index = i;
		}
	}
}

void print_limits(int max_value, int max_value_index, int min_value, int min_value_index)
{
	printf("%d %d %d %d\n", max_value_index + 1, max_value, min_value_index + 1, min_value);
}

int main()
{		
	int arr[N];
	input_array(arr, N);
	
	int max, min, max_index, min_index;
	set_limits(arr, N, &max, &max_index, &min, &min_index);
	print_limits(max, max_index, min, min_index);
	
	return 0;
}
