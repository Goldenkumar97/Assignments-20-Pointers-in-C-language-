//Write a program to demonstrative how to handle the pionters in the program .
#include"stdio.h"
int main()
{
    int x=10,*a,**y,***z;
    a=&x;
    y=&a;
    z=&y;
    printf("%d %d %d %d\n",x,*a,**y,***z);
    printf("%d %d %d %d \n",a,y,z);
    printf("%d %d %d %d \n",*a,*y,*z);
    printf("%d %d %d %d \n",*&a,*&y,*&y,*&z);
    return 0;
}