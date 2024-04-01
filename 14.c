// Write a program to print the sum of  even and odd  numbers  from 1 to N;    
#include <stdio.h>
int main() {
    int n ; int  sum_of_even = 0; int sum_of_odd = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i = 1;i <= n;i++) {
        if(i%2==0)
        sum_of_even += i;
        else 
        sum_of_odd += i;
        }
    printf("The sum of even = %d\n",sum_of_even);
    printf("The sum of odd = %d\n",sum_of_odd);
    return 0;
}//kunal Sharma 