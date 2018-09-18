#include <stdio.h>
#include <graphics.h>

void draw_rect(int x1, int y1, int x4, int y4, int x, int y)
{
    int x2 = x4, y2 = y1, x3 = x1, y3 = y4;

    x1 += x;
    x2 += x;
    y2 += y;
    y4 += y;

    line(x1, y1, x2, y2);
    line(x2, y2, x4, y4);
    line(x1, y1, x3, y3);
    line(x3, y3, x4, y4);
}

int main()
{
    int gd = DETECT, gm;

    int x, y, x1, y1, x2, y2, x3, y3, x4, y4;

    printf("Top Left and Bottom Right Coordinates: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    printf("Shearing x and y Coordinates: ");
    scanf("%d %d", &x, &y);

    initgraph(&gd, &gm, NULL);

    draw_rect(x1, y1, x2, y2, x, y);

    getch();
}