#include <stdio.h>
int main()
{
    char c;
    int v1, v2;

    printf("Enter an alphabet: ");
    scanf("%c",&c);

    v1 = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    v2 = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (v1 || v2)
    {
        printf("\n%c is a vowel.", c);
    }
    else
    {
        printf("\n%c is a consonant.", c);
    }
    return 0;
}
