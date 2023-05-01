//2.Write a function to swap strings of two char arrays of calling functions(TSRS).
#include"stdio.h"
#include"string.h"
void swap(char **p , char **q)
{
    char *t;
    t=*p;
    *p=*q;
    *q=t;
}
int main()
{
    char *a[20],*b[20];
    printf("Enter a and b =  ");
    gets(a);
    gets(b);
    swap(&a,&b);
    printf("After swapping of this a= %s and b=%s",a,b);
    return 0;
}
