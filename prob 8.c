#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a':
            printf("It is a Vowel.\n");
            break;
        case 'e':
            printf("It is a Vowel.\n");
            break;
        case 'i':
            printf("It is a Vowel.\n");
            break;
        case 'o':
            printf("It is a Vowel.\n");
            break;
        case 'u':
            printf("It is a Vowel.\n");
            break;
        default:
            printf("It is a Consonant.\n");
    }

    return 0;
}

