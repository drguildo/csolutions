#include <stdio.h>

void selection_sort(int a[], int n);
void print_array(int a[], int n);

int main() {
	int i, a[5];

	printf("Please enter 5 numbers: ");
	for(i = 0; i < 5; ++i)
		scanf("%d", &a[i]);

	printf("Before:");
	print_array(a, 5);

	selection_sort(a, 5);

	printf("After:");
	print_array(a, 5);

	return 0;
}

void selection_sort(int a[], int n) {
	int i, tmp, largest = 0;

	if(n == 1)
		return;

	for(i = 1; i < n; ++i) {
		if(a[i] > a[largest])
			largest = i;
	}

	tmp = a[n - 1];
	a[n - 1] = a[largest];
	a[largest] = tmp;

	selection_sort(a, n - 1);
}

void print_array(int a[], int n) {
	int i;

	for(i = 0; i < n; ++i)
		printf("%2d", a[i]);

	printf("\n");
}

