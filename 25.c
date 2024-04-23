// Write  a program  to sort the elements  of a array in ascending order  using bubble sort technique
#include <stdio.h>
int main() {
    int arr[10];
    printf("Enter an array \n");
    for(int i =0;i<10;i++){
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<9;i++)
    {
        for(int j = 0;j<9;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i =0;i<10;i++){
        printf("%d ",arr[i]);
        
    }

    return 0;
}
// Kunal Sharma
