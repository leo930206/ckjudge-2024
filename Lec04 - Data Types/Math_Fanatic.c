#include <stdio.h>

int main () {
    long int N, S, Sn = 0;
    scanf("%ld", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%ld", &S);
        Sn += S;

        if (Sn % S == 0) {
            printf("%ld %ld\n", Sn, S);
        }
    }

    return 0;
}