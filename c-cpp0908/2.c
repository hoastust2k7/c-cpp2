#include <stdio.h>

int main() {
    int score;
    score = 0;

    printf("請輸入期中考考試分數：");
    scanf("%d", &score);
    if(score >= 60) {
        printf("恭喜通過期中考考試！^_^。期中考成績為 %d 分！\n", score);
    }
    else {
        printf("遺憾未通過期中考考試！#_#。期中考成績為 %d 分！\n", score); 
    }

    printf("請輸入期中考考試分數：");
    scanf("%d", &score);
    if(score >= 60) {
        printf("恭喜通過期中考考試！^_^。期中考成績為 %d 分！\n", score);
    }
    else {
        printf("遺憾未通過期中考考試！#_#。期中考成績為 %d 分！\n", score); 
    }
    return 0;
}