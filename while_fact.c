#include <stdio.h>

int main()
{
  int number,factorial; 
  printf("Enter a number.\n");
  scanf("%d",&number);
  factorial=1;
  while (number>0){ /* while loop continues util test condition number>0 is true */
    factorial=factorial*number; 
    --number;
  }
  printf("Factorial=%d",factorial);
  return 0;

}
