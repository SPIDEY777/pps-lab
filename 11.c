/* Write a program to take two operands and one operator from the user, perform the operation  
and prints the result b using switch statement*/
# include <stdio.h> 
int main() {
    printf("enter  a operand : ");
    char op;
    scanf("%c",&op);
    printf("enter first number : ");
    int a;
    scanf("%d",&a);
    printf("enter second number : ");
    int b;
    scanf("%d",&b);
    
    int result;
    switch (op)
    {
    case  '+' :
    result = a+b;
     break;
     case  '-' :
    result = a-b;
     break;
     case  '*' :
    result = a+b;
     break;
     case  '/' :
    result = a/b;
    break;
     
       default:
    printf("Invalid input");
    }
        
        printf("Result = %d\n",result);
        return 0;
    }
    // Kunal Sharma

