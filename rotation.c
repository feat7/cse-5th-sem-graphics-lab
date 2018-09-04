#include <stdio.h>
#include <math.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;

    double x1, x2, x3, y1, y2, y3;
    double angle, cosfactor, sinfactor;

    // printf("Coordinates of triangle: ");
    // scanf("%d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    printf("Transformation angle (degree): ");
    scanf("%lf", &angle);

    angle = angle * 3.14 / 180;

    x1 = y1 = 100;
    x2 = y2 = 200;
    x3 = 200;
    y3 = 300;

    initgraph(&gd, &gm, NULL);

    line(x1, y1, x2, y2);
    line(x1, y1, x3, y3);
    line(x2, y2, x3, y3);

    // printf("%d %d %d %d %d %d", x1, x1, x3, y1, y2, y3);

    sinfactor = sin(angle);
    cosfactor = cos(angle);
    printf("%lf %lf", sinfactor, cosfactor);

    x1 = (x1 * cosfactor - y1 * sinfactor);
    x2 = (x2 * cosfactor - y2 * sinfactor);
    x3 = (x3 * cosfactor - y3 * sinfactor);

    y1 = (x1 * sinfactor + y1 * cosfactor);
    y2 = (x2 * sinfactor + y2 * cosfactor);
    y3 = (x3 * sinfactor + y3 * cosfactor);

    // printf("%d %d %d %d %d %d", x1, x1, x3, y1, y2, y3);

    line(x1, y1, x2, y2);
    line(x1, y1, x3, y3);
    line(x2, y2, x3, y3);

    getchar();
}