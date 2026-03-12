#include <stdio.h>
#include <stdbool.h>

int main () {
    int player[8][8], number[64];
    bool bingo[8][8] = {false};

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            scanf("%d", &player[i][j]);
        }
    }
    for (int i = 0; i < 64; i++) {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 64; k++) {
                if (player[i][j] == number[k]) {
                    bingo[i][j] = true;
                }
            }
        }
    }

    int count = 0;

    // 檢查每 row 是否為 bingo
    for (int i = 0; i < 8; i++) {
        bool row_bingo = true;
        for (int j = 0; j < 8; j++) {
            if (!bingo[i][j]) {         // 有 bingo[i][j]=false 出現，則row_bingo=false
                row_bingo = false;
                break;
            }
        }
        if (row_bingo) count++;
    }

    // 檢查每 colume 是否為 bingo
    for (int i = 0; i < 8; i++) {
        bool col_bingo = true;
        for (int j = 0; j < 8; j++) {
            if (!bingo[j][i]) {
                col_bingo = false;
                break;
            }
        }
        if (col_bingo) count++;
    }

    // 檢查對角線1是否為 bingo
    bool diag1_bingo = true;
    for (int i = 0; i < 8; i++) {
        if (!bingo[i][i]) {
            diag1_bingo = false;
            break;
        }
    }
    if (diag1_bingo) count++;

    // 檢查對角線2是否為 bingo
    bool diag2_bingo = true;
    for (int i = 0; i < 8; i++) {
        if (!bingo[i][7 - i]) {
            diag2_bingo = false;
            break;
        }
    }
    if (diag2_bingo) count++;

    printf("%d\n", count);

    return 0;
}
