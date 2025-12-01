#include <stdio.h>

int main() {
    int units;
    float bill;

    // Input: number of units consumed
    scanf("%d", &units);

    // Calculate bill according to given conditions
    if (units <= 199)
        bill = units * 1.20;
    else if (units < 400)
        bill = units * 1.50;
    else if (units < 600)
        bill = units * 1.80;
    else
        bill = units * 2.00;

    // Apply surcharge conditions
    if (bill > 400)
        bill += bill * 0.15;   // 15% surcharge
    else if(bill<=400)
        bill = bill+100;            // minimum charge Rs.100

    // Output total bill
    printf("%.2f", bill);

  return 0;
}
