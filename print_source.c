#include <stdio.h>

/*
int main()
{
   printf("%s",__FILE__);
  
  return 0;
}
*/

int main() {
    FILE *fp;
    char c;
    fp = fopen(__FILE__,"r");
    do {
         c = getc(fp);
         putchar(c);
    }
    while(c != EOF);
    fclose(fp);
    return 0;
}