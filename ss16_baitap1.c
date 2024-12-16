#include <stdio.h>

int main(){
	int number = 10;
	int *numberPtr = &number;
	
	printf("cach 1. in ra gia tri cua number: %d\n",*numberPtr);
	printf("cach 2. in ra gia tri cua number: %d\n",number);
	
	printf("cach 1. in ra dia chi cua number: %lu\n",(unsigned long)numberPtr);
	printf("cach 2. in ra dia chi cua number: %lu\n",(unsigned long)&number);
	return 0;
}
