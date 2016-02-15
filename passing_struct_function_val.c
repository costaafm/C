#include <stdio.h> 
struct student{ char name[50];int roll; };

void Display(struct student stu);
/* function prototype should be below to the structure declaration otherwise compiler shows error */ 
int main()
{ 
  struct student s1;
  printf("Enter student's name: "); 
  scanf("%s",&s1.name);
  printf("Enter roll number:");
  scanf("%d",&s1.roll); 
  Display(s1); // passing structure variable s1 as argument
  return 0;
}
void Display(struct student stu)
{
  printf("Output\nName: %s",stu.name);
  printf("\nRoll: %d",stu.roll);
} 