#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    int x1 = 150, y1 = 100, x2 = 500, y2 = 500, xmin = 100, xmax = 300, ymin = 100, ymax = 300;
    double t1, t2, temp, p[5], q[5];

    int delx = x2 - x1, dely = y2 - y1;
    p[1] = -delx;
    p[2] = delx;
    p[3] = -dely;
    p[4] = dely;
    q[1] = x1 - xmin;
    q[2] = xmax - x1;
    q[3] = y1 - ymin;
    q[4] = ymax - y1;

    initgraph(&gd, &gm, NULL);

    rectangle(xmin, ymax, xmax, ymin);
    setcolor(RED);
    for (int i = 1; i <= 4; i++)
    {
        // parallel
        if (p[i] == 0)
        {
            // boundary and inside condition
            if (q[i] >= 0)
            {
                if (i > 2)
                {
                    if (x1 < xmin)
                        x1 = xmin;
                    if (x2 > xmax)
                        x2 = xmax;

                    line(x1, y1, x2, y2);
                }
                if (i < 3)
                {
                    if (y1 < ymin)
                        y1 = ymin;
                    if (y2 > ymax)
                        y2 = ymax;

                    line(x1, y1, x2, y2);
                }
            }
            // Otherwise outside.
        }
    }

    t1 = 0;
    t2 = 1;

    for (int i = 1; i <= 4; i++)
    {
        temp = q[i] / p[i];

        if (p[i] < 0)
        {
            if (t1 <= temp)
                t1 = temp;
        }
        else
        {
            if (t2 > temp)
                t2 = temp;
        }
    }

    if (t1 < t2)
    {
        x2 = x1 + t1 * p[2];
        y2 = y1 + t1 * p[4];

        x1 = x1 + t2 * p[2];
        y1 = y1 + t2 * p[4];
        line(x1, y1, x2, y2);
    }

    getch();
}