#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c",&ch);

    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("\nThe entered character %c is an Alphabet",ch);
    else
        printf("\nThe entered character %c is not an Alphabet",ch);

    return 0;
}
