#include <stdio.h>

int main(){
    int i, j;
    scanf("%d %d", &i, &j);

    if (i == 1) 
        printf("The total price is %d dollars!", 110*j);
    else if (i == 2) 
        printf("The total price is %d dollars!", 150*j);
    else if (i == 3) 
        printf("The total price is %d dollars!", 135*j);
    else if (i == 4) 
        printf("The total price is %d dollars!", 145*j);
    else 
        printf("Wait, what?");

    return 0;
}