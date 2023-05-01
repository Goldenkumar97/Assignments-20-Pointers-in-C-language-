//1.Write a function to swap values of two in variables of calling function(TSRS).
#include"stdio.h"
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter two number ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("After swapping a=%d and b=%d",a,b);
    return 0;
}
void swap(int *p , int *q)
{
    int t=0;
    t=*p;
    *p=*q;
    *q=t;
}