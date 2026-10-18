/*
    Function Name : Print 5 to 1 numbers
    Description : Print 5 to 1 numbers
    Input : int
    Output : int
    Author : Sanjyot Sandip Nagawade
    Date : 18/10/2026
*/
#include<stdio.h>

int Display()
{
    int i = 0;

    i = 5;

    while(i >= 1)
    {
        printf("%d", i);
        i--;
    }
}
int main()
{
    Display();

    return 0;
}