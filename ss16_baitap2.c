#include <stdio.h>

void swap(int *num1, int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(){
	int n1 = 10, n2 = 20;
	printf("number 1 before: %d\n", n1);
	printf("number 2 before: %d\n", n2);
	swap(&n1, &n2);
	printf("number 1 after: %d\n", n1);
	printf("number 2 after: %d\n", n2);
	return 0;
}
