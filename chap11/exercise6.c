void find_two_largest(int a[], int n, int *largest, int *second_largest) {
	int i;

	*largest = a[0];
	for(i = 1; i < n; i++) {
		if(a[i] > *largest) {
			if(*largest > *second_largest) {
				*second_largest = *largest;
			}
			*largest = a[i];
		} else if(a[i] > *second_largest) {
				*second_largest = a[i];
		}
	}
}

