#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(int argc, char *argv[]) {
    char passwd[10];
    int tried_times = 0;
    do {
        tried_times++;
        printf("第 %d 次輸入密碼：", tried_times);
        gets(passwd);
        if(strcmp(passwd, "13579") == 0) {
            break;
        }
        else if(tried_times == 3) {
            printf("\n連續三次錯誤 結束執行...\n");
            getche();
            exit(0);
        }
        else {
            printf("^_^ Sorry! 密碼有誤...\n\n");
        }
    }
    while (1);
    printf("密碼正確！！Pass...\n");

    return 0;
}