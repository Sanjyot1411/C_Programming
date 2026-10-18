/*
    Function Name : Display first number is twice the second number
    Description : Accet two numbers fro, user and 
                  Display first number in second number of times
    Input : int
    Output : int
    Author : Sanjyot Sandip Nagawade
    Date : 18/10/2026
*/

#include<stdio.h>

void Display(int iNo , int iFrequency)
{
    int i = 0;

    // Write Updater

    for(int iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\n", iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    printf("Enter frequency : \n");
    scanf("%d", &iCount);

    Display(iValue , iCount);

    return 0;
}