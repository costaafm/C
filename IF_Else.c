#include <stdio.h>

int main ()
  
{
  
int num;

  printf("Enter a number you want to check.\n");
  scanf("%d",&num); 
  
  if((num%2)==0) //checking whether remainder is 0 or not. 
    printf("%d is even.",num);
  else printf("%d is odd.",num);
  return 0;
  
}