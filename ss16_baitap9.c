#include <stdio.h>

void addElement(int arr[], int *size, int newElement, int newIndex) {
    for (int i = *size; i > newIndex; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[newIndex] = newElement;
    
    (*size)++;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; 
    int size = 5; 

    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int newElement, newIndex;

    printf("nhap gia tri: ");
    scanf("%d", &newElement);
    printf("nhap vi tri them: ");
    scanf("%d", &newIndex);

    
    if (newIndex < 0 || newIndex > size) {
        printf("sai vi tri\n");
    } else {  
        addElement(arr, &size, newElement, newIndex);

        printf("mang sau khi them phan tu: ");
        	for (int i = 0; i < size; i++) {
          	  	printf("%d ", arr[i]);
       	 	}
        printf("\n");
    }

    return 0;
}
