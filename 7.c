// Write a program to find  the greatest of the three numbers.
# include <stdio.h> 
int main() {
    
    printf("enter first number : ");
    int first;
    scanf("%d",&first);
    printf("enter second number : ");
    int second;
    scanf("%d",&second);
    printf("enter  third number : ");
     int third;
    scanf("%d",&third);
    if(first > second && first > third)
    printf("first is greatest !\n");
    else if(second > first && second > third)
    printf("second  is greatest !\n");
    else
    printf("third is greatest !\n");
    return 0;
}
// Kunal Sharma