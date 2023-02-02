#include <stdio.h>

int main (void) {

    int i;
    int j;
    int c;

    printf("1st input: ");
    scanf("%i", &i);

    printf("2nd input: ");
    scanf("%i", &j);

    c = i + j;
    printf("%i\n", c);
}