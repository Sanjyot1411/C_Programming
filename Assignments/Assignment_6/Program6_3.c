#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;
    float fPayable = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid amount\n");
        return;
    }
    if(fAmount < 1000)
    {
        fPayable = fAmount;
    }
    else if(fAmount < 5000)
    {
        fPayable = fAmount - (fAmount * 0.10f);
    }
    else
    {
        fPayable = fAmount - (fAmount * 0.20f);
    }
    printf("Payable Amount = %.2f\n", fPayable);
}
int main()
{
    float fAmount = 0.0f;
    
    printf("Enter purchase amount : ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}