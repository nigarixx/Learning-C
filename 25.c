#include <stdio.h>

int main(int argc, char const *argv[])
{
    int totaldays;
    int remainderdays;
    int days;
    printf("Number of days: ");
    scanf("%i", &totaldays);

    int years = totaldays / 365;
    remainderdays = totaldays - (years * 365);
    int weeks = remainderdays / 7;
    days = remainderdays - (weeks * 7);

    printf("Years:%i\n", years);
    printf("Weeks:%i\n", weeks);
    printf("Days:%i\n", days);

    return 0;
}
