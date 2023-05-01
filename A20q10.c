//Write a program to print a string in reverse using a pointer.
#include "stdio.h"
#include "string.h"

void reverse(char *str) {
    char *start = str;
    char *end = start + strlen(str) - 1;
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
