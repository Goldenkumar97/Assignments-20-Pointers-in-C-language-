//WAP to count the numbers of vowels and constants in a string usnig pointer.
#include"stdio.h"
#include"string.h"
int main()
{
    int i,j=0,k=0;
    char name[50];
    printf("Enter any Charcter ");
    gets(name);
    for(i=0;name[i];i++)
    {
        if((name[i]=='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u'||name[i]=='A'|| name[i]=='E'|| name[i]=='I'|| name[i]=='O'|| name[i]=='U'))
        {
            k++;
        }
        else
        j++;
    }
    printf("Count of vowel is =%d",k);
    printf("\nCount of constant is =%d",j);
return 0;
}