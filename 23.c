#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input1;
    int input2;
    int sum;
    int diff1;
    int diff2;
    printf("1st input: ");
    scanf("%i", &input1);
    printf("2nd input: ");
    scanf("%i", &input2);
    sum = input1 + input2;
    diff1 = input1 - input2;
    diff2 = input2 -input1;
    if (input1 == 5 || input2 == 5)
        printf("1");
    else if (sum == 5) 
        printf("1");
    else if (diff1 == 5) 
        printf("1");
    else if (diff2 == 5) 
        printf("1");
    else
        printf("0");
        printf("\n");
    return 0;
}
