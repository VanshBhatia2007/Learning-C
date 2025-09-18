/* Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:

For first 50 units Rs. 0.50/unit

For next 100 units Rs. 0.75/unit

For next 100 units Rs. 1.20/unit

For unit above 250 Rs. 1.50/unit

An additional surcharge of 20% is added to the bill*/
#include <stdio.h>
int main() {
    int units;
    float billAmount, surcharge;

    
    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    // Calculate bill amount based on the units consumed
    if (units <= 50) {
        billAmount = units * 0.50;
    } else if (units <= 150) {
        billAmount = (50 * 0.50) + ((units - 50) * 0.75); //phele 50 units ke liye 0.50 rs per unit and next (units-50) ke liye 0.75 rs per unit
    } else if (units <= 250) {
        billAmount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        billAmount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Calculate surcharge
    surcharge = 0.20 * billAmount;

    // Total bill amount including surcharge
    billAmount += surcharge;

    // Output the total bill amount
    printf("Total Electricity Bill: Rs. %.2f\n", billAmount);

    return 0;
}