#include <stdio.h>

int main()
{
    int total = 8;
    int space = 1;

    for (int i = 0; i < total; i++)
    {
        int sharp = total - space;
        for (int j = 0; j < sharp; j++)
        {
            printf("#");
        }
        for (int o = 0; o < space; o++)
        {
            printf(" ");
        }

        printf("  ");

        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }
        for (int y = 0; y < sharp; y++)
        {
            printf("#");
        }
        space++;
        printf("\n");
    }
      





    return 0;
}
