#include <stdio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm, exit;
    initgraph(&gd, &gm, NULL);

    line(200, 200, 300, 300);

    scanf("%d", &exit);
}