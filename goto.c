#include <stdio.h>
int main()
{
  float num,average,sum;
  int i,n; 
  printf("Maximum no. of inputs: ");
  scanf("%d",&n);
  for(i=1;i<=n;++i){
    printf("Enter n%d: ",i);
    scanf("%f",&num); 
    if(num<0.0) goto jump; /* control of the program moves to label jump */
    sum=sum+num;
  }
  jump: average=sum/(i-1);
  printf("Average: %.2f",average);
  return 0;
} 
