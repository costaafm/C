#include <stdio.h>
#include <stdlib.h> 
/* For exit() function */

int main()
{
   char c[1000];
   FILE *fptr;
   fptr=fopen("program.txt","w");
   if(fptr==NULL){
      printf("Error!");
      exit(1);
   }
   printf("Enter a sentence:\n");
   gets(c);
   fprintf(fptr,"%s",c);
   fclose(fptr);
   return 0;
}