#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float first, second;
    for (first = 9.25; first >= 1.25; first--) {
        for (second = 1.25; first >= second; second++) {
            printf("%.2f ", second);
        }
        printf("\n");
    }
    return 0;
}