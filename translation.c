#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    int x1, x2, y1, y2, dx, dy;

    printf("Coordinates of line: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    printf("Translation factor (dx,dy): ");
    scanf("%d %d", &dx, &dy);

    initgraph(&gd, &gm, NULL);

    setcolor(RED);
    line(x1, y1, x2, y2);

    // Scale.
    x1 += dx;
    x2 += dx;

    y1 += dy;
    y2 += dy;

    setcolor(GREEN);

    line(x1, y1, x2, y2);

    getchar();
}