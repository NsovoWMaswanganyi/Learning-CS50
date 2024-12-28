//Nsovo W. Maswanganyi
//Exit 0
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    string brick = "#";
    do
    {
        n = get_int("Height: ");
    }
    while(n<1 || n>8);

    for(int row=1;row<=n;row++)
    {
        for(int space = 1; space <= n-row;space++)
        {
            printf(" ");
        }

        for(int column = 1; column <= row;column++)
        {
            printf("%s",brick);
        }

        printf("  ");

        for(int column = 1; column <= row;column++)
        {
            printf("%s",brick);
        }
        printf("\n");
    }
}
