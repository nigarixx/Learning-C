#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter number:");
    scanf("%i", &n);
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
        printf("%i : ", i);
        scanf("%i", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%i", arr[i]);
    }
    printf("\n");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%i", arr[i]);
    }
    printf("\n");
    return 0;
}
