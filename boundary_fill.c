#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    circle(300, 300, 20);
    _boundaryfill(300, 300, 20);

    getch();
}