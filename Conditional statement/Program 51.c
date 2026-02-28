#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}

int main() {
    char a, b;
    printf("Enter two characters: ");
    scanf(" %c %c", &a, &b);

    int ascii1 = a, ascii2 = b;

    if(isVowel(a) && isVowel(b))
        printf("Sum = %d", ascii1 + ascii2);
    else if(isVowel(a) || isVowel(b))
        printf("Difference = %d", ascii1 - ascii2);
    else
        printf("Product = %d", ascii1 * ascii2);

    return 0;
}
