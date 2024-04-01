// Write a program to print the sum of digits of the entered number.
#include <stdio.h>
int main () {
    int n; int sum = 0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i = n;i>0;i=i/10)
    {
        sum = sum + i%10;
    }
    printf("The sum of digits : %d\n",sum);
    return 0 ;
}
// Kunal Sharma