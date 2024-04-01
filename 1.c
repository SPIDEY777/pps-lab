//Write a program that accepts the marks of 5 subjects and finds the sum and percentage marks obtained
# include <stdio.h>
int main() 
{
    int Maths,Physics,Chemistry,Biology,History,sum;
    float percentage;
printf("Enter marks obtained in Maths: ");
    scanf("%d",&Maths);
printf("Enter marks obtained in Physics: ");
    scanf("%d",&Physics);

printf("Enter marks obtained in Chemistry: ");
    scanf("%d",&Chemistry);

printf("Enter marks obtained in  Biology: ");
    scanf("%d",&Biology);

printf("Enter marks obtained in History: ");
    scanf("%d",&History);

    sum = Maths+Physics+Chemistry+Biology+History;
    percentage = sum/5;

    printf("Sum = %d \n",sum);
    printf("Percentage = %f \n", percentage);

    return 0;


} // Kunal sharma 