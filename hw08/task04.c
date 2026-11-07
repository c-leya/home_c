#include <stdio.h>

#define N 10
#define SUMM_LIMIT 2

void input_array(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
}

void sort_descending(int arr[], int n)
{
	   for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int sum_elements(int arr[], int limit)
{
	int sum = 0;
    for (int i = 0; i < limit; i++) {
        sum += arr[i];
    }
    return sum;
}

int main()
{		
	int arr[N];
	
	input_array(arr, N);
	sort_descending(arr, N);
	printf("%d\n", sum_elements(arr, SUMM_LIMIT));
	
	return 0;
}
