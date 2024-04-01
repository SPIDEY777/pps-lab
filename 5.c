/*Write a program that swaps values of two variables using a third variable.*/
#include <stdio.h>
int main() {
   printf("enter value of a : ");
    int a;
    scanf("%d",&a);
    printf("enter value of b : ");
    int b;
    scanf("%d",&b);
    int c ;
    c = a;
    a =b;
    b =c;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}
// Kunal Sharma