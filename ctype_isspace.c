#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c=' ';
    printf("Return value from isspace() function when white-space character is passed: %d",isspace(c));
    c='+';
    printf("\nReturn value from isspace() function when white-space character is not passed: %d", isspace(c));
    return 0;
}

/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    printf("Enter a character: ");
	scanf("%c",&c);
	if(isspace(c)==0)
	     printf("You didn't entered white-space character.");
	else
	     printf("You entered white-sapce character.");
    return 0;
}
*/
