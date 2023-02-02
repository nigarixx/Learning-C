#include <stdio.h>

int main (void) {
    int i;
    int j;

    printf("Input: ");
    scanf("%d", &j);
    for(i = 1; i <= j; i++)
    {
	 printf("%d\n", (i*i*i));     
    }
}