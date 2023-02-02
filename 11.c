#include <stdio.h>
int main(int argc, char const *argv[])
{
    int total = 7;
    int i, k, j;
    for (int i = 2; i < total; i++)
    {
        for (int j = i; j < total; j++)
        {
            printf(" ");
        }
        for (int k = 2; k < 2 * i -1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
