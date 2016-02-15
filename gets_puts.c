#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[30]; 
  printf("Enter name: "); 
  gets(name); //Function to read string from user.
  printf("Name: ");
  puts(name); //Function to display string.
  return 0; 
  
  /*
  #include <string.h>
  strlen()Calculates the length of string
  strcpy()Copies a string to another 
  stringstrcat()Concatenates(joins)two strings
  strcmp()Compares two string
  strlwr()Converts string to lowercase
  strupr()Converts string to uppercase 
  */
}
