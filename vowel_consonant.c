#include <stdio.h>
int main()
{ 
  char c; 
  printf("Enter an alphabet: ");
  scanf("%c",&c); 
  if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
    printf("%c is a vowel.",c); 
  else printf("%c is a consonant.",c);
  return 0;
}

/* C program to check whether a character is vowel or consonant using conditional operator */
/*
#include <stdio.h>
int main()
{ 
char c;
printf("Enter an alphabet: ");
scanf("%c",&c);
(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U') ? printf("%c is a vowel.",c) : printf("%c is a consonant.",c);
return 0;
}
*/