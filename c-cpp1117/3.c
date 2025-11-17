#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int tried_times = 0;
    int input = 0;
    int guess = 0;
    int min = 0;
    int max = 100;
    srand((unsigned)time(NULL));
    guess = rand() % 99 + 1;
    printf("猜數字遊戲\n\n");
    do {
        printf("猜數字範圍 %d < ? < %d ：", min, max);
    }
    while (1);
    printf("\n總共猜了%d次！\n\n");

    return 0;
}