/* Write a program accepts the temperature in Centigrade and converts into Fahrenheit using the formula C/5 = (F-32)/9 */
 
#include <stdio.h>
int main()
{
    printf("Enter temperature in Centigrade : ");
    float temp;
    scanf("%f", &temp);
    float cent = (temp * 9 / 5 + 32);
    printf("%f F \n", cent);
    return 0;
}// Kunal Sharma