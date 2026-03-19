#include <stdio.h>

int main () {
    int num, max = 1, min = 2147483647;

    scanf("%d", &num);
    while(num != -1){

        if (num > max){
            max = num;
        }
        if (num < min){
            min = num;
        }

        scanf("%d", &num);
    }

    printf("%d", max - min);

    return 0;
}