//Write a program to compute the sum of all elements in an array using pointers.
#include"stdio.h"
int main()
{
    int num[50];
    int i,sum=0,n;
    printf("Enter elements of an array =");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&num[i]);
   }
   for(i=0;i<num[i];i++)
   {
    sum=sum+*num + i;
   }
   printf("Sum of all elements an array is =%d",sum);
   return 0;
}