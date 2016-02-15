#include <stdio.h>
int main()
{ 
  int marks[10],i,n,sum=0;
  printf("Enter number of students: ");
  scanf("%d",&n); 
  for(i=0;i<n;++i){
    printf("Enter marks of student%d: ",i+1);
    scanf("%d",&marks[i]);
    sum+=marks[i];
  }
  printf("Sum= %d",sum);
  return 0;
}

/* scanf("%d",&age[2]); 
// statement to insert value in the third element of array age[].  
scanf("%d",&age[i]); 
// Statement to insert value in (i+1)th element of array age[].
// Because, the first element of array is age[0], second is age[1], ith is age[i-1] and (i+1)th is age[i].  printf("%d",age[0]);
// statement to print first element of an array. 
printf("%d",age[i]); // statement to print (i+1)th element of an array. 
*/