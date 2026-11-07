#include <stdio.h>

#define N 10

void input_array(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
}

int get_sum_positive(int arr[], int n)
{
	int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
			sum += arr[i];
		}
    }
    return sum;
}

int main()
{		
	int arr[N];
	
	input_array(arr, N);
	printf("%d\n", get_sum_positive(arr, N));
	
	return 0;
}
