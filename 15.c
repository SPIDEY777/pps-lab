// Write a program to print fibonacci series;
# include <stdio.h>
int main() {
    printf("enter a number : ");
    int n;
    scanf("%d",&n);
    int a =0; int b = 1;
    int c; 
    printf("%d %d",a,b);
    for(int i =2;i<=n;i++){
       int s = a+b;
       a=b;
       b =s;
       
       printf(" %d",s);


    }
    printf("\n");
    return 0;

}
// Kunal Sharma
