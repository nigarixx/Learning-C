#include <stdio.h>

int main (void)
{
    int total = 8;
    int sharp = 1;

    for (int i = 0; i < total; i++)
    {
        int space = total - sharp;
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int l = 0; l < sharp; l++)
        {
            printf("#");
        }
        sharp++;
        printf("\n");
    }
}