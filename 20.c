# include <stdio.h>
# include <math.h>
long bintodec(long n);
long dectobin (long);

long main() {
    printf("enter choice : \n");
    printf("1. binary to decimal \n");
    printf("2. decimal to binary\n");
    int choice;
    scanf("%d",&choice);
    if(choice == 1){
    printf("enter a binary number : ");
    long n;
    scanf("%ld",&n);
    printf("%ld",bintodec(n));
    }
    else if(choice == 2){
    printf("enter a decimal number : ");
    long num;
    scanf("%ld",&num);
    printf("%ld",dectobin(num));    
    }
    return 0;
}

long bintodec(long n) {
    long m;long sum =0;long a = 0;
    for(long i = n;i>0;i=i/10) {
        m=i%10;
        sum = sum +(m* pow(2,a));
        a++;

    }
    return sum;
}

long dectobin(long n) {
    long long bin = 0;

    int rem, i = 1;

while (n != 0) {
    rem = n % 2;
    n /= 2;
     bin += rem * i;
      i *= 10;
}

return bin;
}
