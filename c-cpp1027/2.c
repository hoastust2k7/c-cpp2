#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float leftside, inside;
    printf("    |   1.5     3.5    5.5    7.5    9.5\n");
    printf("----------------------------------------\n");
    for (leftside = 1.5; leftside <= 9.5; leftside += 2.0) {
        printf("%.1f |", leftside);
        for (inside = 1.5; inside <= 9.5; inside += 2.0) {
            printf("%7.2f", (leftside * inside));
        }
        printf("\n");
    }
}