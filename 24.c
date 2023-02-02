#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Write 3 inputs: ");
    scanf("%i %i %i", &a, &b, &c);
    if (a >= 1 && a <= 100 && b >= 1 && b <= 100 && c >= 1 && c <= 100)
    {
        if (a > b && a < c || a < b && a > c)
        printf("%i", a);
        else if (b > a && b < c || b < a && b > c)
        printf("%i", b);
        else if (c > a && c < b || c < a && c > a)
        printf("%i", c);
        printf("\n");
    }
    return 0;
}
