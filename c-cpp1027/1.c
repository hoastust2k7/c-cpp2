#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int input = 0;
    printf("多變項式 (n+n2+n3+n4) 的總和\n\n");

    printf("第一次請使用者輸入數值(1~10) n：");
    scanf("%d", &input);
    printf("輸入的數值 n = %d\n", input);
    printf("各項的乘積為：\n...");
    return 0;
}