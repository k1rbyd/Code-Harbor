#include <stdio.h>

int main()
{
    int i, j;
    scanf("%d %d", &i, &j);
    int r1, r2;
    r1 = i / j;
    r2 = i % j;
    printf("Quotient: %d\n", r1);
    printf("Remainder: %d\n", r2);
}
