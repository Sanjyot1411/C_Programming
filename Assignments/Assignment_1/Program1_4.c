/*
    Function Name : Divisible by 5 or not
    Description : Accept number from user & check it is divisible by 5 or not
    Input : int
    Output : BOOL
    Author : Sanjyot Sandip Nagawade
    Date : 18/10/2026
*/
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }

    return 0;
}