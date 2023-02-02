#include <stdio.h>
 
int main() 
{
  	int total = 8;
    int e = 1;

  	for (int i = 1 ; i <= total; i++) 
  	{
      	for (int j = 1 ; j <= i; j++) 
      	{
          	printf("%d", e++);
      	}
      	printf("\n");
  	}
  	return 0;
}