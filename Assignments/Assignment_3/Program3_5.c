/*
    Function Name : Check wheather character is vowel or not
    Description :   Accept one character from user and
                    check character is vowel or not
    Input : Character
    Output : Character
    Author : Sanjyot Sandip Nagawade
    Date : 18/10/2026
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char cValue)
{
    if((cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'o') || (cValue == 'u') ||
       (cValue == 'A') || (cValue == 'E') || (cValue == 'I') || (cValue == 'O') || (cValue == 'U'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}