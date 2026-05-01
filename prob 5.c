#include <stdio.h>

int main() {
 int age;
    printf("Enter you age: ");
    scanf("%d",&age);
    if(age>18){
        printf("Your Eligible");
    }
    else{
        printf("Not Eligible");

    }

    return 0;
}
