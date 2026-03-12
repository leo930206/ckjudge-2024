#include <stdio.h>

int main(){
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12;

    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9, &x10, &x11, &x12);

    int a = x2 + x4 + x6 + x8 + x10 + x12;
    int b = x1 + x3 + x5 + x7 + x9 + x11;
    int x = (3*a) + b;
    int y = x - 1;
    int z = y % 10;

    printf("%d", 9-z);

    return 0;
}
