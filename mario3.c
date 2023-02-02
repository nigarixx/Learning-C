#include <stdio.h>

int main (void) {

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

        printf("  ");
        
        for (int y = 0; y < space; y++)
        {
            printf(" ");
        }
        for (int n = 0; n < sharp; n++)
        {
            printf("#");
        }
        sharp++;
        printf("\n");
    }
    return 0;
}