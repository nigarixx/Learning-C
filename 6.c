#include <stdio.h>
void main()
{
   int total = 8;

   for(int i = 1; i <= total; i++)
   {
        for(int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
    	printf("\n");
   }
}