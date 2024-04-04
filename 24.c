// Write a program to search an element in a array using Linear Search.
# include <stdio.h>

int main() {
    int arr[] = {23,45,7,5,3,4,6,4,354,656,6,3,4,34,46,56,7,35,6245,625,46,56,};

    int n; int c=0;int i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for( i=0;i<22;i++) {
        if(arr[i]==n) {
            c =1;
            break;
        
        }
    }
        if(c==1)
        printf("Number is present at index : %d",i);
        else
        printf("Number is not present !");
    
    return 0;
}
// Kunal Sharma