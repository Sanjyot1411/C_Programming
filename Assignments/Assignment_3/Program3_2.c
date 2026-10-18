/*
    Function Name : Print even factors of any number
    Description :   Accept input from user and print 
                    even factors of that number
    Input : int
    Output : int
    Author : Sanjyot Sandip Nagawade
    Date : 18/10/2026
*/

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if((i % 2 == 0))
        {
            printf("%d\t", i);
        }
    }
    printf("\n");

}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}