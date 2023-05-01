//Write the program to find the maximum number of between two number using pionter.
#include "stdio.h"
int main()
{
    int a, b;
    printf("Enter two numbers ");
    scanf("%d%d", &a, &b);
    int *x = &a;
    int *y = &b;
    printf("largest number is = %d", *x > *y ? *x : *y);
}