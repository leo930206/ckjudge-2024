#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);

    int score[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
    }

    int T;
    scanf("%d", &T);

    int B[T], A[T];
    for (int j = 0; j < T; j++) {
        scanf("%d %d", &B[j], &A[j]);
    }

    int x = 0, y = 0, z = 0;
    for (int j = 0; j < T; j++) {
        for (int i = 0; i < N; i++) {
            if (score[i] < B[j]) x++;
            else if(score[i] < A[j]) y++;
            else if(score[i] >= A[j]) z++;
        }
        printf("%d %d %d\n", x, y, z);
        x = y = z = 0;
    }

    return 0;
}
