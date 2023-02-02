#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, p;
    printf("enter number:");
    scanf("%i", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("%i : ", i);
        scanf("%i", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
        printf("%i\n", sum);
    return 0;
}