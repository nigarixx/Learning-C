#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int arr[i];
    for ( i = 0; i < 10; i++)
    {
        printf("%i : ", i);
        scanf("%i", &arr[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%i", arr[i]);
    }
    
    printf("\n");
    return 0;
}
