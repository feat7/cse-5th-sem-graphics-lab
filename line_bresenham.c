#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm, x1, x2, y1, y2, delx, dely, p, x, y;

    printf("Coordinates of line: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    delx = x2 - x1;
    dely = y2 - y1;

    x = x1;
    y = y1;

    p = delx - 2 * dely;

    initgraph(&gd, &gm, NULL);

    do
    {
        putpixel(x, y, RED);

        if (p >= 0)
        {
            y++;
            p = p + 2 * dely - 2 * delx;
        }
        else
        {
            p = p + 2 * dely;
        }
        x++;

    } while (delx--);

    scanf("%d", &x1);
}