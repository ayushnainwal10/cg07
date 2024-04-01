#include <stdio.h>
#include <graphics.h>
#include <math.h>

void boundaryFill(int x, int y, int b, int f) {
    if (getpixel(x, y) != b && getpixel(x, y) != f) {
        putpixel(x, y, f);
        boundaryFill(x + 1, y, b, f);
        boundaryFill(x, y + 1, b, f);
        boundaryFill(x - 1, y, b, f);
        boundaryFill(x, y - 1, b, f);
    }
}

int main() {
    int gd = DETECT, gm;
    int cx = 300, cy = 200, r = 50;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setcolor(WHITE);
    circle(cx, cy, r);

    boundaryFill(cx, cy, WHITE, RED);

    getch();
    closegraph();
    return 0;
}

