/*
    Function Name : Accept number and print *
    Description : Accept any number from user and print *
    Input : int
    Output : void
    Author : Sanjyot Sandip Nagawade
    Date : 18/10/2026
*/
#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf(" * ");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}