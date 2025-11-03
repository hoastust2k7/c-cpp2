#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int input = 0, a = 0, b = 0, c = 0, d = 0, sum = 0;
    printf("多變項式 (n+n2+n3+n4) 的總和\n\n");

    printf("第一次請使用者輸入數值(1~10)：");
    scanf("%d", &input);
    printf("\n輸入的數值 n = %d\n", input);
    if (input >= 1 && input <= 10) {
        printf("各項的乘積為：\n");
        for (a = 1, b = 2, c = 3, d = 4; a <= input, b <= input * 2, c <= input * 3, d <= input * 4; a++, b += 2, c += 3, d += 4) {
            sum += (a + b + c + d);
            printf("(%d + %d + %d + %d) + ", a, b, c, d);
        }
        printf("\b\b\b = %d\n\n", sum);
    }
    else {
        printf("\n輸入有誤！限 1～10 間的整數！\n");
    }

    // input = 0, a = 0, b = 0, c = 0, d = 0, sum = 0;
    // printf("第二次請使用者輸入數值(1~10)：");
    // scanf("%d", &input);
    // printf("\n輸入的數值 n = %d\n", input);
    // if (input >= 1 && input <= 10) {
    //     printf("各項的乘積為：\n");
    //     for (a = 1, b = 2, c = 3, d = 4; a <= input, b <= input * 2, c <= input * 3, d <= input * 4; a++, b += 2, c += 3, d += 4) {
    //         sum += (a + b + c + d);
    //         printf("(%d + %d + %d + %d) + ", a, b, c, d);
    //     }
    //     printf("\b\b\b = %d\n\n", sum);
    // }
    // else {
    //     printf("\n輸入有誤！限 1～10 間的整數！\n");
    // }

    // input = 0, a = 0, b = 0, c = 0, d = 0, sum = 0;
    // printf("第三次請使用者輸入數值(1~10)：");
    // scanf("%d", &input);
    // printf("\n輸入的數值 n = %d\n", input);
    // if (input >= 1 && input <= 10) {
    //     printf("各項的乘積為：\n");
    //     for (a = 1, b = 2, c = 3, d = 4; a <= input, b <= input * 2, c <= input * 3, d <= input * 4; a++, b += 2, c += 3, d += 4) {
    //         sum += (a + b + c + d);
    //         printf("各項的乘積為：\n");
    //         printf("(%d + %d + %d + %d) + ", a, b, c, d);
    //     }
    //     printf("\b\b\b = %d\n\n", sum);
    // }
    // else {
    //     printf("\n輸入有誤！限 1～10 間的整數！\n");
    // }
    return 0;
}