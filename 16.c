# include <stdio.h>
int main() {
    int n;int count = 0; int i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for( i = 1;i <= n;i++);
    {
        if(n % i == 0){
        count += 1;
        }
    }
    if(count == 2){
    printf("It is a Prime number !\n");}
    else{
    printf("It is not a Prime number !\n");}
    return 0;

}// Kunal Sharma