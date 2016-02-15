#include <stdio.h> 
struct Distance{ int feet; float inch; }
d1,d2,sum; 
int main()
{ 
  printf("1st distance\n");
  printf("Enter feet: ");
  scanf("%d",&d1.feet); 
  /* input of feet for structure variable d1 */ 
  printf("Enter inch: ");
  scanf("%f",&d1.inch);
  /* input of inch for structure variable d1 */ 
  printf("2nd distance\n");
  printf("Enter feet: ");
  scanf("%d",&d2.feet);
  /* input of feet for structure variable d2 */
  printf("Enter inch: "); 
  scanf("%f",&d2.inch); /* input of inch for structure variable d2 */
  sum.feet=d1.feet+d2.feet; 
  sum.inch=d1.inch+d2.inch; 
  if (sum.inch>12){ //If inch is greater than 12, changing it to feet.
    ++sum.feet;
    sum.inch=sum.inch-12; 
  } 
  printf("Sum of distances=%d\'-%.1f\"",sum.feet,sum.inch);
  /* printing sum of distance d1 and d2 */ 
  return 0;
  /*
  typedef keyword is used in creating a type comp(which is of type as struct complex). Then, two structure variables c1 and c2 are created by this comp type :
  typedef struct complex{ int imag; float real; }comp; Inside main: comp c1,c2; 
  struct complex { int imag_value; float real_value; }; struct number{ struct complex c1; int real; }n1,n2; 
  */
} 
