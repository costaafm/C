#include <stdio.h>
 void take_data(int a[][10], int b[][10], int r1,int c1, int r2, int c2);
 void multiplication(int a[][10],int b[][10],int mult[][10],int r1,int c1,int r2,int c2);
 void display(int mult[][10], int r1, int c2);
 
 int main() 
 {
 int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k; 
 printf("Enter rows and column for first matrix: ");
 scanf("%d%d", &r1, &c1);
 printf("Enter rows and column for second matrix: "); 
 scanf("%d%d",&r2, &c2); /* If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again. */
 while (c1!=r2) {
 printf("Error! column of first matrix not equal to row of second.\n"); 
 printf("Enter rows and column for first matrix: "); 
 scanf("%d%d", &r1, &c1); 
 printf("Enter rows and column for second matrix: ");
 scanf("%d%d",&r2, &c2);
 }
 take_data(a,b,r1,c1,r2,c2); /* Function to take matices data */
 multiplication(a,b,mult,r1,c1,r2,c2);
 /* Function to multiply two matrices. */ 
 display(mult,r1,c2);
 /* Function to display resultant matrix after multiplication. */
 return 0; 
 } 