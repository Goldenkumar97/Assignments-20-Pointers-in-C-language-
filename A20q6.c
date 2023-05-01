//Write a program to calculate the length of the string using pointer.
#include "stdio.h"
#include "string.h"
int length(char *);
int main()
{
    char str[20];
    printf("enter a string =");
    gets(str);

    printf("Lengthh of string is =%d ", length(str));
}
int length(char *p)
{
    int i=0;
    while (*p != '\0')
    {
        i++;
        p++;
    }
    return i;
}