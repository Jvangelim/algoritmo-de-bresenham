#include <stdio.h>
#include <stdlib.h>

void bresenham(int x0, int y0, int x1, int y1) {
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);
    int sx, sy;

    if (x0 < x1) sx = 1;
    else sx = -1;
    if (y0 < y1) sy = 1;
    else sy = -1;

    int err = dx - dy;

    while (x0 != x1 || y0 != y1) {
        printf("(%d, %d)\n", x0, y0);
        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x0 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y0 += sy;
        }
    }
    printf("(%d, %d)\n", x0, y0);
}

int main() {
    int x0, y0, x1, y1;

    printf("Digite as coordenadas do ponto inicial (x0, y0): ");
    scanf("%d %d", &x0, &y0);
    printf("Digite as coordenadas do ponto final (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Pontos ao longo da linha:\n");
    bresenham(x0, y0, x1, y1);

    return 0;
}
