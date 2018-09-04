#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    double x1, x2, y1, y2, sx, sy;

    printf("Coordinates of line: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    printf("Scaling factor (x,y): ");
    scanf("%lf %lf", &sx, &sy);

    initgraph(&gd, &gm, NULL);

    setcolor(RED);
    line(x1, y1, x2, y2);

    // Scale.
    x1 *= sx;
    x2 *= sx;

    y1 *= sy;
    y2 *= sy;

    setcolor(GREEN);

    line(x1, y1, x2, y2);

    scanf("%d", &x1);
}