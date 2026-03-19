#include <stdio.h>

int main(){
    int a;
    float A;

    scanf("%d", &a);

    A = 1.7320508f / 4 * a * a;

    printf("%.3f", A);

    return 0;
}
