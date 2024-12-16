#include <stdio.h>

int findElement(int *arr, int length, int indexElement){
	for(int i = 0; i < length; i++){
		if(*(arr + i) == indexElement){
			printf("vi tri: %d", arr + i);
			return 0;
		}
	}
	printf("khong tim thay vi tri cua %d", indexElement);
}

int main(){
	int arr[5] = {5, 10, 15, 20, 25};
	int length = sizeof(arr)/sizeof(arr[0]);
	int indexElement;
	printf("nhap phan tu muon tim: ");
	scanf("%d", &indexElement);
	findElement(&arr[0], length, indexElement);
	return 0;
}
