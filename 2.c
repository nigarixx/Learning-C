#include <stdio.h>

int main(void) {
    int  j = 0;      
    int total = 0;

    for (j = 1; j <= 10; j++) 
    {
        printf("%i ",j);
        total = total + j;     
    }
    printf("\n%i\n", total);
} 