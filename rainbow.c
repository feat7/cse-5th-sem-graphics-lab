#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm, c;

    initgraph(&gd, &gm, NULL);

    for (int i = 30; i <= 200; i++)
    {
        delay(100);
        setcolor(i / 10);
        arc(getmaxx() / 2, getmaxy() / 2, 180, 0, i - 10);
    }

    getchar();
}