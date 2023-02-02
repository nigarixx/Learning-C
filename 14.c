#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y;
    printf("Input X and Y: ");
    scanf("%i %i", &x,&y);

    if(x > 0 && y > 0)
        printf("The coordinate point (%i, %i) lies in the First quadrant.\n", x,y);
    else if (x < 0 && y > 0)
        printf("The coordinate point (%i, %i) lies in the Second quadrant.\n", x,y);
    else if (x < 0 && y < 0)
        printf("The coordinate point (%i, %i) lies in the Third quadrant.\n", x,y);
    else if (x > 0 && y < 0)
        printf("The coordinate point (%i, %i) lies in the Fourth quadrant.\n", x,y);

    return 0;
}
