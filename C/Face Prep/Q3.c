#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p1;
    scanf("%d %d",&p1.x,&p1.y);
    if(p1.x==0)
    printf("On X axis");
    else if(p1.y==0)
    printf("On Y axis");
    else
    {
    if(p1.x>0 && p1.y>0)
    printf("First Quad");
    if(p1.x>0 && p1.y<0)
    printf("Fourth Quad");
    if(p1.x<0 && p1.y>0)
    printf("Second Quad");
    if(p1.x<0 && p1.y<0)
    printf("Third Quad");
    }
}