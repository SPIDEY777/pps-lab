# include <stdio.h>
int main() 
{
    int Maths,Physics,Chemistry,Biology,History;
    float percentage; char grade;
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

     
    percentage = (Maths+Physics+Chemistry+Biology+History)/5;
    if(percentage >=90 && percentage <=100)
    grade = 'A';
    else if(percentage >=80 && percentage <90)
    grade = 'B';
    else if(percentage >=60 && percentage <80)
    grade = 'C';
    else if(  percentage <60)
    grade = 'D';

    printf("Grade : %c\n",grade);
    return 0;
} // Kunal Sharma