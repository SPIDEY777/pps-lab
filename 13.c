//Write a program to print the factorial of a given number
#include <stdio.h>
int main() {
    int n ; int factorial = 1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++) {
        factorial *= i;
        }
    printf("The factorial = %d\n",factorial);
    return 0;
}//kunal Sharma 
