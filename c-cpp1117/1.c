#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    char chose = 'y';
    int answer, input, number1, number2, number3, number4;

    do {
        printf("\n");
        printf("請輸入第一個整數：");
        scanf("%d", &number1);
        printf("請輸入第二個整數：");
        scanf("%d", &number2);
        printf("請輸入第三個整數：");
        scanf("%d", &number3);
        printf("請輸入第四個整數：");
        scanf("%d", &number4);
        answer = (number1 + (number2 * number3) - number4);
        do {
            printf("%d + %d * %d - %d = ", number1, number2, number3, number4);
            scanf("%d", &input);
            if(input = answer) {
                printf("答對了！^_^\n");
                break;
            }
            else {
                printf("答錯了！@_@\n");
                continue;
            }
        }
        while (1);
        printf("是否（Y/n）繼續：");
        chose = tolower(getche());
        printf("\n");
    }
    while (chose == 'y');
    printf("\n");

    return 0;
}