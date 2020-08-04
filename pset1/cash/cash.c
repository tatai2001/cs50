#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    do
    {
        float dollars_owed = get_float("Change owed: ");
    }
    while (cents_owed <= 0);
    
    int cents_owed = round(dollars_owed * 100);

    int quarters = cents_owed / 25;
    int dimes = (cents_owed % 25) / 10;
    int nickels = ((cents_owed % 25) % 10) / 5;
    int pennies = ((cents_owed % 25) % 10) % 5;

    printf("%d\n", quarters + dimes + nickels + pennies);
}
