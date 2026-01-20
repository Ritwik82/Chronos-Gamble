#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setup() {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

int main() {
    setup();
    unsigned int seed = time(0); 
    srand(seed);

    printf("--- THE CHRONOS GAMBLE ---\n");
    printf("Predict 30 numbers to claim the flag.\n\n");

    for (int i = 0; i < 30; i++) {
        int target = rand() & 0xf; 
        int guess;
        printf("Iteration %d/30. Prediction: ", i + 1);
        if (scanf("%d", &guess) != 1 || guess != target) {
            printf("Wrong! The timeline collapses.\n");
            return 1;
        }
        printf("Correct!\n");
    }
    printf("\nCongratulations! FLAG: LNM{My$t3ry_s33d}\n");
    return 0;
}