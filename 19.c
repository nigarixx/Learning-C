#include <stdio.h>
int main(int argc, char const *argv[])
{
    int user1, user2;

    printf("Input 1: ");
    scanf("%i", &user1);
    printf("Input 2: ");
    scanf("%i", &user2);

    if (user1 == user2)
    {
        printf("Inputs are equal.");
    }
    else
    {
        int difuser1 = 100 - user1;
        int difuser2 = 100 - user2;
        if (difuser1 < 0)
        {
            difuser1 = difuser1 - (difuser1 * 2);
        }
        if (difuser2 < 0)
        {
            difuser2 = difuser2 - (difuser2 * 2);
        }
        if (difuser1 > difuser2)
        {
            printf("%i", user2);
        }
        else
        {
            printf("%i", user1);
        }
        printf("\n");
    }
    return 0;
}
