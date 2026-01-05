#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int answer1, answer2;
    int guess1, guess2;
    int low1 = 0, high1 = 1000;
    int low2 = 0, high2 = 1000;
    int count = 0;

    srand(time(NULL));
    answer1 = rand() % 1001;
    answer2 = rand() % 1001;

    printf("====== 猜數字遊戲 ======\n\n");

    while (1) {
        printf("猜數字範圍 %d < ? < %d , %d < ? < %d : ",
               low1, high1, low2, high2);
        scanf("%d %d", &guess1, &guess2);
        count++;

        /* 第一個數字判斷 */
        if (guess1 > answer1) {
            printf("第一個數字再小一點!! ");
            high1 = guess1;
        } else if (guess1 < answer1) {
            printf("第一個數字再大一點!! ");
            low1 = guess1;
        } else {
            printf("第一個數字正確!! ");
        }

        /* 第二個數字判斷 */
        if (guess2 > answer2) {
            printf("第二個數字再小一點!! ");
            high2 = guess2;
        } else if (guess2 < answer2) {
            printf("第二個數字再大一點!! ");
            low2 = guess2;
        } else {
            printf("第二個數字正確!! ");
        }

        printf("您猜了 %d 次\n\n", count);

        /* 同時猜中才結束 */
        if (guess1 == answer1 && guess2 == answer2) {
            printf("賓果! 猜對了，答案是 %d 和 %d\n", answer1, answer2);
            printf("總共猜了 %d 次!\n", count);
            break;
        }
    }

    printf("\n請按任意鍵繼續 . . .");
    getchar();
    getchar();

    return 0;
}

