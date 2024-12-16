#include <stdio.h>
void addElement(int *arr, int length){
	int newIndex, newElement;
	printf("nhap so phan tu: ");
	scanf("%d", &newElement);
	printf("nhap phan so: ");
	scanf("%d", &newIndex);
	if(newIndex >= 0 && newIndex <= 100){
		if(newIndex > length ){
			length = newIndex + 1;
			*(arr + newIndex) = newElement;
		}else if(newIndex <= length){
			*(arr + newIndex) = newElement;
		}
		for(int i = 0; i < length; i++){
			printf("arr[%d] = %d\n", i, *(arr + i));
		}		
	}else{
		printf("something wrong");
	}
}
int main(){
	int arr[5] = {10, 20, 30, 40, 50};
	int length = sizeof(arr)/sizeof(arr[0]);
	addElement(&arr, length);
	return 0;
}
