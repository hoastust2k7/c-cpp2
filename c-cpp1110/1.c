#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int horizontal = 0, vertical = 0, i;
    printf("    ");
    for(horizontal = 0; horizontal <= 12; horizontal++) {
        printf("%3d", horizontal);
    }
    printf("\n");
    printf("     --------------------------------------");
    for(i = 0; i <= 127; i++) {
        if(i % 13 == 1) {
            printf("\n");
            printf(" %2d|", vertical);
            vertical++;
        }
        if(i <= 31) {
            printf("   ");
        }
        else {
            printf("  %c", (char)i);
        }
    }

    return 0;




}