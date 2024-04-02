/* Write a program that inputs two arrays and saves the sum of corresponding elements of these arrays
in a third array and prints them */
# include <stdio.h>
int main(){
    int first[5];
    int second[5];
    
    printf("Enter first array \n");
    for(int i = 0;i < 5;i++) {
        printf("enter a number : ");
        scanf("%d",&first[i]);
    }
    printf("Enter second array \n");
    for(int i = 0;i < 5;i++) {
        printf("enter a number : ");
        scanf("%d",&second[i]);
    }
    int third[5];
    for(int i = 0;i < 5;i++) {
        third[i] = first[i] + second[i];
    }
    for(int i = 0;i < 5;i++) {
        printf("%d ",third[i]);
        
    }
    printf("\n");
    return 0;



    


}
// Kunal  Sharma