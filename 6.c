/*Write a program that checks whether the two  numbers entered by the user are equal or not.*/
# include <stdio.h>
int main() {
    printf("enter first number : ");
    int first;
    scanf("%d",&first);
    printf("enter second number : ");
    int second;
    scanf("%d",&second);
    if(first == second) 
    printf("Numbers are equal ! \n");
    else
    printf("Numbers are not equal !");
    return 0;
} // Kunal Sharma