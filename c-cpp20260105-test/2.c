#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int try_time = 0;
    int input = 0;
    int guess = 0;
    int min = 0;
    int max = 1000;
    srand((unsigned)time(NULL));
    guess = rand() % max;
    printf("猜數字遊戲\n\n");
    do {
        printf("猜數字範圍 %d < ? < %d ：", min, max);
        scanf("%d", &input);
        try_time++;
        if(input >= 1 && input < max) {
            if(input == guess) {
                printf("賓果！猜對了, 答案是 %d \n", guess);
                break;
            }
            else if (input > guess) {
                max = input;
                printf("再小一點！！");
            }
            else if (input < guess) {
                min = input;
                printf("再大一點！！");
            }
            printf("你猜了 %d 次\n\n", try_time);
        }
        else {
            printf("請輸入提示範圍內的數字！\n");
        }
    }
    while (1);
    printf("\n總共猜了 %d 次！\n\n", try_time);

    return 0;
}