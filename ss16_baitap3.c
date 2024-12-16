#include <stdio.h>

int addition(int *n1, int *n2, int *total){
	return *total = *n1 + *n2;
}

int main(){
	int n1 = 10, n2 = 20, total;
	printf("%d + %d = ", n1, n2);
	addition(&n1, &n2, &total);
	printf("%d", total);
	return 0;
}
