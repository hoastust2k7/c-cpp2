#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int input = 0;
    int telephone = 96836429;
    printf("=== 手機用戶歸屬雲端大數據分析系統 ===\n\n");
    printf("請輸入第一次手機門號共 10 碼：09");
    scanf("%d", &input);
    printf("你的手機門號是 09%d !... ^(o_○)^^ ...!\n\n", input);
    if( input == telephone) {
        printf("您使用的門號歸屬於：南臺科大電信 !... o(^_^)o ...!\n\n");
    }
    else {
        printf("您使用的門號歸屬於：???");
    }
    
    input = 0;
    telephone = 78369863;

    printf("請輸入第二次手機門號共 10 碼：09");
    scanf("%d", &input);
    printf("你的手機門號是 09%d !... ^(o_○)^^ ...!\n\n", input);
    if( input == telephone) {
        printf("您使用的門號歸屬於：遠傳電信 !... o(^_^)o ...!\n\n");
    }
    else {
        printf("您使用的門號歸屬於：???");
    }
    
    input = 0;
    telephone = 69472084;

    printf("請輸入第三次手機門號共 10 碼：09");
    scanf("%d", &input);
    printf("你的手機門號是 09%d !... ^(o_○)^^ ...!\n\n", input);
    if( input == telephone) {
        printf("您使用的門號歸屬於：中華電信 !... o(^_^)o ...!\n\n");
    }
    else {
        printf("您使用的門號歸屬於：???");
    }

    input = 0;
    telephone = 27937628;

    printf("請輸入第四次手機門號共 10 碼：09");
    scanf("%d", &input);
    printf("你的手機門號是 09%d !... ^(o_○)^^ ...!\n\n", input);
    if( input == telephone) {
        printf("您使用的門號歸屬於：台灣大哥大 !... o(^_^)o ...!\n\n");
    }
    else {
        printf("您使用的門號歸屬於：???");
    }

    return 0;
}