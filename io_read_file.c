#include <stdio.h> 
int main() 
{ 
  int n; 
  FILE *fptr;
  if ((fptr=fopen("C:\\program.txt","r"))==NULL){
    printf("Error! opening file");
    exit(1);
/* Program exits if file pointer returns NULL. */ 
  }
  fscanf(fptr,"%d",&n);
  printf("Value of n=%d",n); 
  fclose(fptr);
  return 0;
} 


/* 
Reading and writing of binary files
fread(address_data,size_data,numbers_data,pointer_to_file);
fwrite(address_data,size_data,numbers_data,pointer_to_file);
*/
