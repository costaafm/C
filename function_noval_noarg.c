#include <stdio.h>
void prime();
int main(){
    prime();      //No argument is passed to prime().
    return 0;
}
void prime(){  
/* There is no return value to calling function main(). Hence, return type of prime() is void */
    int num,i,flag=0;
    printf("Enter positive integer enter to check:\n");
    scanf("%d",&num);
    for(i=2;i<=num/2;++i){
        if(num%i==0){
             flag=1;
         }
    }
    if (flag==1)
        printf("%d is not prime",num);
    else
       printf("%d is prime",num);  
    }