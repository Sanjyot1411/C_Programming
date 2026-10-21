#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
   if(cValue >= 'A' && cValue <= 'Z')
   {
    printf("Uppercase alphabet\n");
   }
   else if(cValue >= 'a' && cValue <= 'z')
   {
    printf("Lowercase alphabet\n");
   }
   if(cValue >= '0' && cValue <= '9')
   {
    printf("Digit\n");
   }
   else
   {
    printf("Special character\n");
   }
}
int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}