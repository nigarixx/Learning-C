#include <stdio.h>
int main(int argc, char const *argv[])
{
    int hour;
    int min;
    int total;
    int min_in_hour = 60;

    printf("Input hours: ");
    scanf("%i", &hour);
    printf("Input minutes: ");
    scanf("%i", &min);

    total = (min_in_hour * hour) + min;
    printf("Total: %i minutes.\n", total);
    return 0;
}
