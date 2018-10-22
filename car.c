#include <stdio.h>
#include <graphics.h>

void draw_car(int x1, int y1, int x4, int y4)
{
    for (int i = 0; i <= 20; i++)
    {
        setcolor(RED);
        bar(x1, y1, x4, y4);
        bar(x4, y4 - (y4 - y1) / 2, x4 + 40, y4);
        setcolor(BLACK);
        circle(x1 + 40, y4 + 5, 20);
        circle(x4 - 20, y4 + 5, 20);
        floodfill(x1 + 40, y4 + 5, 20);
        floodfill(x4 - 20, y4 + 5, 20);

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

    setbkcolor(WHITE);
    draw_car(200, 200, 400, 350);

    getchar();
}