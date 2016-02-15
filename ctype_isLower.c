#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c='M';
    printf("%c",tolower(c));

/* Displays the same argument passed if other characters than uppercase character is passed to tolower(). */

    c='d';
    printf("\n%c",tolower(c));
    c='9';
    printf("\n%c",tolower(c));
    return 0;
}