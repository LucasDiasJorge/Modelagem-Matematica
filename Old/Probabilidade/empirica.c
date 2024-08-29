#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int *random = malloc(sizeof(int));

    if (random == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Seed the random number generator to ensure different results on each run
    srand(time(NULL));

    int one = 0;
    int zero = 0;

    for(int i = 0; i < 50; i++){

        *random = rand() % 2; // Generate a random number between 0 and 1
        printf("%d\n", *random);

        if(*random == 1){
            one++;
        }
        if(*random == 0){
            zero++;
        }
    }

    printf("Frequências de 1 = %d\n",one);
    printf("Frequências de 0 = %d\n",zero);

    printf("Probabilidade empírica = %f\n", (float)one/50);

    free(random);
    return 0;
}
