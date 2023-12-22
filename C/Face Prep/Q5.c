#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int r1, m1, m2;
    float m = ((b * b) - (4 * a * c));
    if (m > 0)
        r1 = 1;
    else if (m < 0)
        r1 = 2;
    else if (m == 0)
        r1 = 3;

    switch (r1)
    {
    case 1:
        m1 = ((-1 * b) + sqrt(m)) / (2 * a);
        m2 = ((-1 * b) - sqrt(m)) / (2 * a);
        printf("Root 1: %d\n", m1);
        printf("Root 2: %d\n", m2);
        break;

    case 2:
        printf("The equation has complex roots.\n");
        printf("Root 1: %d + %di\n", -b / (2 * a), (int)sqrt(-m) / (2 * a));
        printf("Root 2: %d - %di\n", -b / (2 * a), (int)sqrt(-m) / (2 * a));
        break;

    case 3:
        m1 = (-1 * b) / (2 * a);
        printf("The equation has a single real root: %d\n", m1);
        break;

    default:
        printf("Invalid input or calculation error.\n");
        break;
    }
}
