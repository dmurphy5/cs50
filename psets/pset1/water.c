#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;

    do
        {
            n = get_int();
        }
    while(n < 0);
    printf("Minutes: %i\n", n);
    printf("Bottles: %i\n", n * 12);
}