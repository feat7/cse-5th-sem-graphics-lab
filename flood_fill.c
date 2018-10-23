#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    circle(200, 200, 20);
    floodfill(200, 200, 20);

    getch();
}