/*
    Function Name : Print * on screen
    Description : Accept input from user and print * on screen
    Input : int
    Output : void
    Author : Sanjyot Sandip Nagawade
    Date : 18/10/2026
*/
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    // write updater
    while(iCnt < iNo)
    {
        printf(" * ");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}