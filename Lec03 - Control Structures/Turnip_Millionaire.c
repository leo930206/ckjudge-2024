#include <stdio.h>

int main () {
    float x, y, h = 0;
    scanf("%f", &x);
    for (int i = 0; i < 5; i++) {
        h = 0.9 * x + 0.1 * h - 51;
        y = -0.98 * h + 153;
        printf("%.1f ", y);
        x = y;
    }

    return 0;
}