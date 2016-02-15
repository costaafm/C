#include <stdio.h>

struct tipo_data {int dia; char nome_mes[10]; int ano; };

void Display (struct tipo_data data);

  Void Display (struct tipo_data data_form)
  {
    printf("Output\n dia: %d",data_form.dia);
    printf("\n mes: %s",data_form.nome_mes);
    printf("\n ano: %d",data_form.ano);
}

int main ()

{

  struct tipo_data data_form;

  printf("introduza o dia:");
  scanf("%d",&data_form.dia);

  printf("introduza o mes:");
  scanf("%s",&data_form.nome_mes);

  printf("introduza o ano:");
  scanf("%d",&data_form.ano);

  Display(data_form);

  return 0;

}

/*
#include <stdio.h>
struct student{
    char name[50];
    int roll;
};
void Display(struct student stu);*/
/* function prototype should be below to the structure declaration otherwise compiler shows error */
/* int main(){
    struct student s1;
    printf("Enter student's name: ");
    scanf("%c",&s1.name);
    printf("Enter roll number:");
    scanf("%d",&s1.roll);
    Display(s1);   // passing structure variable s1 as argument
    return 0;
}
void Display(struct student stu){
  printf("Output\nName: %c",stu.name);
  printf("\nRoll: %d",stu.roll);
}
*/ 