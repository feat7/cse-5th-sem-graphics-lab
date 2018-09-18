#include <stdio.h>
#include <graphics.h>

void draw_car(int x1, int y1, int x4, int y4)
{
    for (int i = 0; i <= 20; i++)
    {
        rectangle(x1, y1, x4, y4);
        x1 += i;
        x4 += i;
        delay(100);
        cleardevice();
    }
}

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    draw_car(200, 200, 300, 300);

    getchar();
}