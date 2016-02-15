#include <stdio.h>
#include <stdlib.h>


void main()

{
  float temp,soma,media;
  int k;
  k=0;
  soma=0;
  
  while (k<5)
  {
    printf("Digite uma temperatura em graus celsius: %d \n",k);
    fflush(stdin);
    scanf("%f",&temp);
    soma=soma+temp;
    printf("ciclo actual: %d \n",k);
    printf("temperatura actual: %4.2f \n",temp);
    printf("soma actual: %4.2f \n",soma);
    fflush(stdin);
    getchar();
    k++; // k=k+1 conter increment
  }
  media=soma/5;
  
  printf("media de temperaturas actual: %4.2f \n",media);
    
    fflush(stdin);
    getchar();

   return 0;
}
