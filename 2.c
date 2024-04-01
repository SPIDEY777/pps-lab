/* Write a program that calculates the simple interest and compound interest . the Pa,rate, time is to be
 input by user*/
#include <stdio.h>
int main() {
    int principal_amount,time;
    float rate;
    printf("Enter Principal Amount : ");
    scanf("%d",&principal_amount);
    printf("Enter  Rate of Interest : ");
    scanf("%f",&rate);
    printf("Enter Time period : ");
    scanf("%d",&time);
     
    printf("The Simple Interest = %f \n",((principal_amount*rate*time)/100));
    return 0;
    // Kunal Sharma

}