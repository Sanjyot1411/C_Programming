#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    switch(toupper(chDiv))
    {
        case 'A':
            printf("Your exam at 7 AM");
            break;

        case 'B':
            printf("Your exam at 8.30 AM");
            break;

        case 'C':
            printf("Your exam at 9.20 AM");
            break;

        case 'D':
            printf("Your exam at 10.30 AM");
            break;

        default :
            printf("Invalid Division");
            break;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your division :");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}