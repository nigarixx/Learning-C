#include <stdio.h>

int main(int argc, char const *argv[])
{
    int k, l, n, sum;
    printf("Write 3 input: ");
    scanf("%i %i %i", &k, &l, &n);
    
    if (k >= 10 && k <= 20 && k != 13 && k != 17) {
            k = 0;
    }
    if (l >= 10 && l <= 20 && l != 13 && l != 17) {
            l = 0;
    }
    if (n >= 10 && n <= 20 && n != 13 && n != 17) {
            n = 0;
    }
    sum=k+l+n;
    printf("%i\n", sum);
    return 0;
}
