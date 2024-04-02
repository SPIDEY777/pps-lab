/* Write a program to find tha max and min number in a array */
# include <stdio.h>
int main(){
    int arr[5];
    
    printf("Enter  the array - \n");
    for(int i = 0;i < 5;i++) {
        printf("enter a number : ");
        scanf("%d",&arr[i]);
    }
    int max = 0;
    int min = arr[0];
    for(int i =0;i < 5;i++) {
        if(arr[i]>max){
            max =arr[i];
        }
        
        if(arr[i]<min) {
            min = arr[i];
        }
        
    }
    printf("maximum element : %d\n",max);
    printf("minimum element : %d\n",min);

    return 0;
}
// kunal Sharma