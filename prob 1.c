#include <stdio.h>

int main() {
    int n, digit, sum = 0;
    printf("Enter number : ");
    scanf("%d",&n);
    do{
        digit = n % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++){
        fact *= i;}
        sum = sum + fact;
        n = n / 10;
    }
    while(n>0);
    printf("%d",sum);

    return 0;
}
