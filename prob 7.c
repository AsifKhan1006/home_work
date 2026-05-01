#include <stdio.h>

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num/5 && num/11){
        printf("Divisible by both");
    }
    else{
        printf("Not divisible by both");
    }

    return 0;
}
