/*
    Function Name : Number < 10 print Hello otherwise print Demo
    Description : Accept number from user if it is less than 10 print hello otherwise print Demo
    Input : int
    Output : string
    Author : Sanjyot Sandip Nagawade
    Date : 18/10/2026
*/
#include<stdio.h>

int Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
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