#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    int p=1;

    printf("Number:");
    scanf("%i",&n);

    for(int i=1;i<=n;i++)
    {
        sum=sum+p;
        p=(p*10)+1;
        printf("%i ", p);
        if (i != n)
        {
            printf("+ ");
        }
        
    }
    printf("= %d",sum);
    printf("\n");
}
