#include <stdio.h>
int main(int argc, char const *argv[])
{
    char name[10];
    char lastname[20];
    int birthdate;

    printf("Input your Firstname: ");
    scanf("%s", name);
    printf("Input your Lastname: ");
    scanf("%s", lastname);
    printf("Input your year of birth: ");
    scanf("%i", &birthdate);

    printf("%s %s %i\n", name, lastname, birthdate);

    return 0;
}
