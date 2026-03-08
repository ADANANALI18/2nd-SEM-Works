#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {

        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }
        else if(isalpha(str[i])) {
            consonants++;
        }
        else if(isdigit(str[i])) {
            digits++;
        }
        else if(str[i]==' ') {
            spaces++;
        }
    }

    printf("\nNumber of Vowels: %d", vowels);
    printf("\nNumber of Consonants: %d", consonants);
    printf("\nNumber of Digits: %d", digits);
    printf("\nNumber of White spaces: %d", spaces);

    return 0;
}
