#include <stdio.h>
 
int main() 
{
  	int total = 8;

  	for (int i = 1 ; i <= total; i++) 
  	{
      	for (int j = 1 ; j <= i; j++) 
      	{
          	printf("%d", i);
      	}
      	printf("\n");
  	}
  	return 0;
}