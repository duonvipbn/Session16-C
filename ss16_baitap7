#include <stdio.h>

void bubbleSort(int *arr, int length){
	for(int i = 0; i < length-1; i++){
		for(int j = 0; j < length-1-i; j++){
			if(*(arr + j) > *(arr + j + 1)){
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;		
			}
		}
	}
	for(int i = 0; i < length; i++){
		printf("arr[%d] = %d\n", i, *(arr + i));
	}
}

int main(){
	int arr[5] = {25, 20, 15, 10, 100};
	int length = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(&arr[0], length);
	return 0;
}
