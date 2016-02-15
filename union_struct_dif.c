#include <stdio.h>
union job {         //defining a union
   char name[32];
   float salary;
   int worker_no;
}u;
struct job1 {
   char name[32];
   float salary;
   int worker_no;
}s;
int main(){
   printf("size of union = %d",sizeof(u));
   printf("\nsize of structure = %d", sizeof(s));
   return 0;
}

/*
union car{
  char name[50];
  int price;
}c1, c2, *c3;

OR;

union car{
  char name[50];
  int price;
};
-------Inside Function-----------
union car c1, c2, *c3;
*/