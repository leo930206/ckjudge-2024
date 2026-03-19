#include <stdio.h>

int main () {
    int i, j;
    scanf("%d %d", &i, &j);
    while(i < 1 || i > 4 || j < 1 || j > 100) {
        scanf("%d %d", &i, &j);
    }

    switch (i) {
        case 1: {
            for (int a = j; a > 0; a--) {
                for (int b = a; b > 0; b--) {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }

        case 2: {
            for (int a = 1; a <= j; a++) {
                for (int b = a; b > 0; b--) {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }

        case 3: {
            for (int a = j; a > 0; a--) {
                for (int b = j - a; b > 0; b--) {
                    printf(" ");
                }
                for (int b = a; b > 0; b--) {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }

        case 4: {
            for (int a = 1; a <= j; a++) {
                for (int b = j - a; b > 0; b--) {
                    printf(" ");
                }
                for (int b = a; b > 0; b--) {
                    printf("*");
                }
                printf("\n");
            }
            break;
        }
    }

    return 0;
}