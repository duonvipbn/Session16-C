#include <stdio.h>

void printArr(int *arr, int length) {
	for(int i = 0; i < length; i++) {
		printf("%d\n", *(arr+i));
	}
}

int main() {
	int arr[5] = {10, 20, 30, 40 ,50};
	int length = sizeof(arr)/sizeof(arr[0]);
	printArr(&arr, length);
	return 0;
}
