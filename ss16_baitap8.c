#include <stdio.h>
#include <string.h>

void reverseAllString(char *str, char *revStr) {
    int len = strlen(str);
    int i;
    
    for (i = 0; i < len; i++) {
        revStr[i] = str[len - i - 1]; 
    }
    revStr[len] = '\0';
}

int main() {
    char inputString[100], reverseString[100];
    printf("nhap chui: ");
    fgets(inputString, sizeof(inputString), stdin);

    reverseAllString(inputString, reverseString);
    
    printf("ban dau: %s\n", inputString);
    printf("dao nguoc: %s\n", reverseString);
    
    return 0;
}
