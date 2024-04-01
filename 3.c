// Write a program to calculate the area and circumference of the cirlce
# include <stdio.h>
int main () {
    float radius;
    printf("Enter radius of the circle : ");
    scanf("%f",&radius);
    printf("Radius of the circle : %f\n",((radius*radius)*(22/7)));
    printf("Circumference of a circle : %f\n",(2*(22/7)*radius));
    return 0;
}// Kunal Sharma