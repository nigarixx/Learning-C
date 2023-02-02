#include<stdio.h>

int main()
{
    int row;
    char arr[25] = {'A', 'B', 'C', 'D', 'E'};

    printf("Enter number of rows: ");
    scanf("%d",&row);

    for(int i = 0; i < row; i++)
    {
        for(int j = 1; j <= row-i; j++)
        {
            printf(" ");
        }

        for(int k = 0; k <= i; k++)
        {
            printf("%c", arr[k]);
        }
        for (int c = i-1; c >= 0; c--)
        {
            printf("%c", arr[c]);
        }
        printf("\n");
    }

    return 0;
}