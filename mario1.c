#include <stdio.h>

int main (void)
{
    int total = 8;
    int sharp = 1;

    for (int i = 0; i < total; i++)
    {
        int space = total - sharp;
        for (int j = 0; j < sharp; j++)
        {
            printf("#");
        }
        for (int b = 0; b < space; b++)
        {
            printf(" ");
        }
        sharp++;
        printf("\n");
    }
}