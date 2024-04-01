// Write a program to find the reverse of the entered number.
#include <stdio.h>
int main () {
    int n; int rev = 0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i = n;i>0;i=i/10)
    {
        rev = rev*10 + i%10;
    }
    printf(" Reverse : %d\n",rev);
    return 0 ;
}
// Kunal Sharma