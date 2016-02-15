#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c='C';
    printf("Return value when uppercase character is passed to isupper(): %d",isupper(c));
    c='+';
    printf("\nReturn value when uppercase character is not passed to is isupper(): %d", isupper(c));
   return 0;
}