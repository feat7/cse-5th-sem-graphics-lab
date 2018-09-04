#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm, x, y;
    double p, x_c, y_c, rx, ry;
    x_c = y_c = 200;

    rx = 50;
    ry = 50;
    x = 0;
    y = ry;

    p = ry * ry + ((rx * rx) / 4) - rx * rx * ry;

    initgraph(&gd, &gm, NULL);

    while ((2 * x * ry * ry) < (2 * y * rx * rx))
    {
        putpixel(x_c + x, y_c - y, RED);
        putpixel(x_c - x, y_c + y, RED);
        putpixel(x_c + x, y_c + y, RED);
        putpixel(x_c - x, y_c - y, RED);

        if (p < 0)
        {
            p = p + 2 * ry * ry * x + ry * ry;
        }
        else
        {
            y--;
            p = p + 2 * ry * ry * x + ry * ry - 2 * rx * rx * y;
        }
        x++;
    }

    // Region 2

    p = ((float)x + 0.5) * ((float)x + 0.5) * ry * ry + (y - 1) * (y - 1) * rx * rx - rx * rx * ry * ry;

    while (y >= 0)
    {
        putpixel(x_c + x, y_c - y, RED);
        putpixel(x_c - x, y_c + y, RED);
        putpixel(x_c + x, y_c + y, RED);
        putpixel(x_c - x, y_c - y, RED);

        if (p > 0)
        {
            p = p - 2 * rx * rx * y + rx * rx;
        }
        else
        {
            p = p + 2 * ry * ry * x - 2 * rx * rx * y - rx * rx;
            x++;
        }
        y--;
    }

    getchar();
}