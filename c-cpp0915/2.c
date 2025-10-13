#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

    int input, guess;
    // srand((unsigned)time(NULL));
    // guess = rand() % 5 + 1; 
    // printf("請輸入要猜的數字（限1-5）：");
    // scanf("%d", &input);
    // if (input == guess) {
    //     printf("猜對了！^_^，正確數字為 %d！\n", guess);
    // } else {
    //     printf("猜錯了！#_#，正確數字為 %d！\n", guess);

    // }

    guess = rand() % 10 + 1;
    printf("請輸入第一次要猜的數字（數字範圍在 1-10）：");
    scanf("%d", &input);
    if (input == guess) {
        printf("第一次猜對了通過，請截圖證明貼於隨堂練習2！正確數字為 %d！\n", guess);
    } else {
        printf("第一次猜錯了未通過，請截圖證明貼於隨堂練習2！正確數字為 %d！\n", guess);
    }

    input = 0;
    guess = 0;
    guess = rand() % 10 + 1;
    printf("請輸入第二次要猜的數字（數字範圍在 1-10）：");
    scanf("%d", &input);
    if (input == guess) {
        printf("第二次猜對了通過，請截圖證明貼於隨堂練習2！正確數字為 %d！\n", guess);
    } else {
        printf("第二次猜錯了未通過，請截圖證明貼於隨堂練習2！正確數字為 %d！\n", guess);
    }

    return 0;
}