#include <stdio.h>

void deleteElement(int arr[], int *size, int newIndex) {
    for (int i = newIndex; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    (*size)--;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;  

    printf("mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int newIndex;
    printf("nhap vi tri xoa: ");
    scanf("%d", &newIndex);

    if (newIndex < 0 || newIndex >= size) {
        printf("sai vi tri\n");
    } else {
        deleteElement(arr, &size, newIndex);

        printf("mang sau khi xaa phan tu: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
