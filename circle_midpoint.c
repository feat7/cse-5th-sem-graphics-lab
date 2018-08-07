#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm, r, x, y, x_c, y_c;
    double d;

    printf("Radius of circle: ");
    scanf("%d", &r);

    x = 0;
    y = r;

    x_c = 300;
    y_c = 300;

    d = 1.25 - r;

    initgraph(&gd, &gm, NULL);

    do
    {
        putpixel(x + x_c, y + y_c, RED);
        putpixel(x + x_c, -y + y_c, RED);
        putpixel(-x + x_c, -y + y_c, RED);
        putpixel(-x + x_c, y + y_c, RED);

        putpixel(y + x_c, x + y_c, RED);
        putpixel(-y + x_c, x + y_c, RED);
        putpixel(y + x_c, -x + y_c, RED);
        putpixel(-y + x_c, -x + y_c, RED);

        if (d < 0)
        {
            d = d + 2 * x + 1;
        }
        else
        {
            y--;
            d = d + 2 * x - 2 * y + 1;
        }
        x++;
    } while (x < y);

    scanf("%d", &x);
}