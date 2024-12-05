//Nsovo W. Maswanganyi
//Finished
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int diff,change_count=0,x,amount;
    do
    {
        amount = get_int("Change owed: ");
    }
    while(amount<0);

    if(amount !=0)
    {
        x = amount/25;
        change_count = x;
        diff = x * 25;
        amount -= diff;
        x = amount/10;
        change_count = change_count + x;
    }

    if(amount !=0 && amount % 10 !=0)
    {
        diff = x * 10;
        amount -= diff;
        x = amount/5;
        change_count = change_count + x;
    }

    if(amount !=0 && amount % 5 !=0)
    {
        diff = x * 5;
        amount -= diff;
        x = amount/1;
        change_count = change_count + x;
    }
    printf("%i\n",change_count);
}
