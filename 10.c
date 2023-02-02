#include <stdio.h>
int main(int argc, char const *argv[])
{
    int total = 10;

    for (int i = 2; i < total; i++)
    {
        for (int a = i; a < total; a++)
        {
            printf(" ");
        }
        for (int j = 2; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = total - 1; i > 1; i--)
    {
        for (int a = total; a > i; a--)
        {
            printf(" ");
        }
        for (int j = 2; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
