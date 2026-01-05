#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int keyin1, keyin2, guess1, guess2, count = 0;
    int min1 = 0, max1 = 10000, min2 = 0, max2 = 1000;

    srand((unsigned)time(NULL));
    guess1 = rand() % 999 + 1;
    guess2 = rand() % 999 + 1;

    printf("======= 猜數字遊戲 =======\n");

    while (1) {
        printf("猜數字範圍 %d ~ %d & %d ~ %d : ", min1, max1, min2, max2);
        scanf("%d %d", &keyin1, &keyin2);
        count++;

        // 範圍檢查
        if (keyin1 < min1 || keyin1 > max1 || keyin2 < min2 || keyin2 > max2) {
            printf("請輸入提示範圍內的數字!\n");
            continue;
        }

        // 全對
        if (keyin1 == guess1 && keyin2 == guess2) {
            printf("\n猜對了！答案是 %d & %d\n\n", guess1, guess2);
            break;
        }

        // 第一個數字
        if (keyin1 > guess1) {
            max1 = keyin1;
            printf("第 1 個再小一點！\n");
        } else if (keyin1 < guess1) {
            min1 = keyin1;
            printf("第 1 個再大一點！\n");
        }else if (keyin1 == guess1){
        	printf("第 1 個猜對了!\n");
		}

        // 第二個數字
        if (keyin2 > guess2) {
            max2 = keyin2;
            printf("第 2 個再小一點！\n");
        } else if (keyin2 < guess2) {
            min2 = keyin2;
            printf("第 2 個再大一點！\n");
        }else if (keyin2 == guess2){
        	printf("第 2 個猜對了！\n");
		}

        printf("目前猜了 %d 次\n\n", count);
    }

    printf("總共猜了 %d 次!\n\n", count);
    system("PAUSE");
    return 0;
}

