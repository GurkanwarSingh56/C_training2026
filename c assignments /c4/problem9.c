#include <stdio.h>

int main()
{
    float units, base_bill, surcharge, total_bill;
    printf("Enter total units consumed: ");
    scanf("%f", &units);
    if (units <= 50)
    {
        base_bill = units * 0.50;
    }
    else if (units <= 150)
    {
        base_bill = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250)
    {
        base_bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else
    {
        base_bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    surcharge = base_bill * 0.20;

    total_bill = base_bill + surcharge;

    printf("Total Electricity Bill = Rs. %.2f\n", total_bill);

    return 0;
}
