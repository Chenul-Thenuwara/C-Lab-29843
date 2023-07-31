#include <stdio.h>

int main() {
    char vowal;

    printf("Enter a character: ");
    scanf("%c", &vowal);

    switch (vowal)
    {
        case 'a':
            printf("vowel\n");break;
        case 'e':
            printf("vowel\n");break;
        case 'i':
            printf("vowel\n");break;
        case 'o':
            printf("vowel\n");break;
        case 'u':
            printf("vowel\n");break;
        default:
            printf("not a vowel!\n");break;

}

}

