#include <stdio.h>

int main () {
    int d1, d2, password[7] = {0};

    for (int i = 0; i < 75; i++) {
        scanf("%d %d", &d1, &d2);
        
        if (d2 % 2 == 1) {
            if (password[d1] == 9) {
                password[d1] = 0;
            }
            else {
                password[d1]++;
            }
        }
        if (d2 % 2 == 0) {
            if (password[d1] == 0) {
                password[d1] = 9;
            }
            else {
                password[d1]--;
            }
        }
    }

    printf("%d %d %d %d %d %d", password[1], password[2], password[3], password[4], password[5], password[6]);

    return 0;
}
