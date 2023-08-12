#include <stdio.h>

int main() {

    double v0 = 5.0;       // Velocidade inicial
    double g = 10.0;       // Aceleração da gravidade
    double t = 0.5;        // Tempo
    double y = v0 * t - 0.5 * g * t * t;   // Posição vertical

    printf("Posição vertical: %lf\n", y);

    return 0;
}