#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int input, guess;
    srand((unsigned)time(NULL));
    guess = rand() % 5 + 1; 
    printf("請輸入要猜的數字（限1-5）：");
    scanf("%d", &input);
    if (input == guess) {
        printf("猜對了！^_^，正確數字為 %d！\n", guess);
    } else {
        printf("猜錯了！#_#，正確數字為 %d！\n", guess);

    }

    return 0;
}