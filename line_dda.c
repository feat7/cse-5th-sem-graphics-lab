#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm, x1, x2, y1, y2, delx, dely, step, x, y, xinc, yinc;
    double m;

    printf("Coordinates of line: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    m = abs((y2 - y1) / (x2 - x1));

    delx = abs((x2 - x1) / m);
    dely = abs((y2 - y1) / m);

    step = (delx > dely) ? delx : dely;

    x = x1 + 0.5;
    y = y1 + 0.5;

    xinc = delx / step;
    yinc = dely / step;

    initgraph(&gd, &gm, NULL);

    for (int i = 0; i <= step; i++)
    {
        putpixel((int)x, (int)y, RED);
        x = x + xinc;
        y = y + yinc;
    }

    scanf("%d", &x1);
}