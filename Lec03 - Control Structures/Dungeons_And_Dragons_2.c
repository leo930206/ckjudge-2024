#include <stdio.h>

int main () {
    int player_HP = 100, dragon_HP = 100;
    int d1, d2, d3, d4, d5, d6;

    scanf("%d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6);
    while(1) {
        if ((d1 + d2 + d3) % 2 == 1) { //player attack
            if (d6 > d5 && d5 > d4 ) {
                dragon_HP -= 25;
            }
            else if (((d4 % 2) == (d5 % 2)) || ((d5 % 2) == (d6 % 2))) {
                dragon_HP -= 5;
            }
            else {
                dragon_HP -= 0;
            }
        }
        
        else { //dragon attack
            if ((d5 - d4) > d6 || (d4 - d5) > d6) {
                player_HP -= 15;
            }
            else if ((d4 + d5) != d6) {
                player_HP -= 5;
            }
            else {
                player_HP -= 0;
            }
        }

        if (player_HP <= 0) {
            printf("Dragon wins");
            return 0;
        }
        if (dragon_HP <= 0) {
            printf("Player wins");
            return 0;
        }

        scanf("%d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6);
    }
    

    return 0;
}