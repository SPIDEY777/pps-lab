// Write a program to print all armstrong numbers between 1 to 100.
#include <stdio.h> 
#include <math.h>
int isarmstrong(int n); 
int main()    
{   
    for(int i = 1; i <= 100;i++)
    {
        if(isarmstrong(i))
        printf("%d",i);
    }
return 0;  
}   

int isarmstrong(int n) {

    int m;int sum = 0; int c = 0;    

    for(int i =n;i !=0;i=i/10) {
    c++;
}


for(int i =n;i !=0;i=i/10) {
    m = i%10;
    sum = sum+ pow(m,c);

}
if(sum ==n)
return 1;
else
return 0;
}
// Kunal Sharma