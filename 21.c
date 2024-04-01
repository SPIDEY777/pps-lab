/* Write a program that simply takes elements of an array from the user and finds the sum 
of these elements*/
# include <stdio.h> 
int main() {
    int arr[10];int sum=0;
    for(int i =0;i<10;i++) {
        printf("enter a number : ");
        scanf("%d",&arr[i]);
        

    } 
    for(int i =0;i<10;i++) {
        sum = sum+ arr[i];
    }
    printf("The sum of the array : %d\n",sum);
    return 0;
}
// Kunal Sharma