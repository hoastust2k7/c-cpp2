#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int input, first = 3, second = 2, third = 1, i, sum = 0;

    printf("請輸入 X 值 ( 1~100 ) ：");
    scanf("%d", &input);
    printf("輸入的 X 值 = %d\n", input);
    if(input >= 1 && input <= 100) {
        printf("你計算的總和是：\n");
        for(i = 1; i <= input; i++) {
            printf("(%d + %d + %d) + ", first * i * i, second * i, third);
            sum += 3*i*i + 2*i + 1;
        }
        printf("\b\b\b = %d\n\n", sum);
    }
    else {
        printf("\n輸入有誤！限 1～100 間的整數！\n");
    }

    input, first = 3, second = 2, third = 1, i, sum = 0;
    printf("請輸入 X 值 ( 1~100 ) ：");
    scanf("%d", &input);
    printf("輸入的 X 值 = %d\n", input);
    if(input >= 1 && input <= 100) {
        printf("你計算的總和是：\n");
        for(i = 1; i <= input; i++) {
            printf("(%d + %d + %d) + ", first * i * i, second * i, third);
            sum += 3*i*i + 2*i + 1;
        }
        printf("\b\b\b = %d\n\n", sum);
    }
    else {
        printf("\n輸入有誤！限 1～100 間的整數！\n");
    }

    input, first = 3, second = 2, third = 1, i, sum = 0;
    printf("請輸入 X 值 ( 1~100 ) ：");
    scanf("%d", &input);
    printf("輸入的 X 值 = %d\n", input);
    if(input >= 1 && input <= 100) {
        printf("你計算的總和是：\n");
        for(i = 1; i <= input; i++) {
            printf("(%d + %d + %d) + ", first * i * i, second * i, third);
            sum += 3*i*i + 2*i + 1;
        }
        printf("\b\b\b = %d\n\n", sum);
    }
    else {
        printf("\n輸入有誤！限 1～100 間的整數！\n");
    }

    return 0;
}
