//Write a program to print the elements of an array an reverse oreder.
#include "stdio.h"
int main()
{
    int x[10], i, y;
    printf("enter 10 numbers\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &x[i]);
    printf("Reverse array is :- \n");
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", *(x + i));
    }
}