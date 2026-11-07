#include <stdio.h>

#define N 5

void input_array(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
}

int get_min(int arr[], int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	
	return min;
}

int main()
{		
	int arr[N];
	
	input_array(arr, N);
	printf("%d\n", get_min(arr, N));
	
	return 0;
}
