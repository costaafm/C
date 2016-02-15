#include <stdio.h>

#include <math.h>

int main(){
   float num,root;
   printf("Enter a number to find square root.");
   scanf("%f",&num);
   root=sqrt(num);          /* Computes the square root of num and stores in root. */
   printf("Square root of %.2f=%.2f",num,root);
   return 0;
}

/* 
C Header Files
<ctype.h>
<math.h>
<stdio.h>
<stdlib.h>
<string.h>
<time.h>

*/