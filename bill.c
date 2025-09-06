#include <stdio.h>
int main()
{
    int unit;
    printf("Enter unit consumed:");
    scanf("%d", &unit);
    float charge, amount;
    if (unit <= 199)
    {
        charge = 1.20;
    }
    else if (unit > 200 && unit < 400)
    {
        charge = 1.50;
    }
    else
    {
        charge = 2.00;
    }
    amount = unit * charge;
    printf("Amount is:%f\n", amount);
    return 0;
}