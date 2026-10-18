/*
    Function Name : Number is even or odd
    Description : Accpet input and check number is even or odd
    Input : int
    Output : BOOL
    Author : Sanjyot Sandip Nagawade
    Date : 18/10/2026
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    // Display result
    if(bRet == TRUE)
    {
        printf("It is Even");
    }
    else
    {
        printf("It is Odd");
    }

    return 0;
}