#include<stdio.h>
int main(int argc, char const *argv[])
{
    int height, name;

    printf("Enter height: ");
    scanf("%i", &height);

    if (height < 100)
    printf("The person is short");
    else if (100 < height && height < 180)
    printf("The person is Dwayne");
    else if (181 < height && height < 200)
    printf("The person is tall");
    else 
    printf("So tall or so short");
    printf("\n");
    return 0;
}
