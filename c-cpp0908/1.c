#include <stdio.h>

int main() {
    int score;
    score = 0;

    printf("Pls enter ur score: ");
    scanf("%d", &score);
    if(score >= 60) {
        printf("Pass!\n");
    }
    else {
        printf("Down!\n"); 
    }

    printf("Pls enter ur score: ");
    scanf("%d", &score);
    if(score >= 60) {
        printf("Pass!\n");
    }
    else {
        printf("Down!\n"); 
    }
}