#include <stdio.h>
#include <graphics.h>

void rain()
{
    int maxx = getmaxx(), maxy = getmaxy();
    for (int i = 0; i < maxx; i++)
        for (int j = 0; j < maxy; j++)
        {
            if (i % 10 == 0 && j % 15 == 0)
                putpixel(i + i % 2, j + j % 2, WHITE);
        }
    delay(10);
}

void draw_man()
{
    line(35, 340, 35, 310);
    circle(35, 300, 10);
    line(35, 310, 50, 330);
    line(50, 330, 50, 280);
    line(15, 280, 85, 280);

    arc(50, 280, 180, 0, 35);
    arc(55, 330, 360, 180, 5);

    line(25, 380, 35, 340);
    line(45, 380, 35, 340);
}

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, NULL);

    draw_man();
    rain();
    getch();
}