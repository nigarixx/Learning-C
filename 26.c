#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Inputs: \n");
    scanf("%i%i%i", &a, &b, &c); 

    if (a > b && a > c) {
    printf("%i is bigger than other inputs", a);
    }
    else if (b > a && b > c) {
    printf("%i is bigger than other inputs", b);
    }
    else if (c > b && c > a) {
    printf("%i is bigger than other inputs", c);
    }
    printf("\n");
    return 0;
}
