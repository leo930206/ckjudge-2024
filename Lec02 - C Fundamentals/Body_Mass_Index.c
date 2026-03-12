#include <stdio.h>

int main(){
    int x1, y;
    float x2, BMI;

    scanf("%d %d", &x1, &y);

    x2 = (float)x1 / 100;
    BMI = y / (x2*x2);

    printf("%f", BMI);

    return 0;
}
