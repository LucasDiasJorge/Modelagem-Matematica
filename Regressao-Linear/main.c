#include <stdio.h>

void regressaoLinear(int n, float x[], float y[], float *m, float *b) {
    float soma_x = 0, soma_y = 0, soma_xy = 0, soma_x2 = 0;

    for (int i = 0; i < n; i++) {
        soma_x += x[i];
        soma_y += y[i];
        soma_xy += x[i] * y[i];
        soma_x2 += x[i] * x[i];
    }

    *m = (n * soma_xy - soma_x * soma_y) / (n * soma_x2 - soma_x * soma_x);
    *b = (soma_y - *m * soma_x) / n;
}

int main() {
    int n;
    printf("Digite o número de pontos: ");
    scanf("%d", &n);

    float x[n], y[n];

    printf("Digite os valores de x e y separados por espaço:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f %f", &x[i], &y[i]);
    }

    float m, b;
    regressaoLinear(n, x, y, &m, &b);

    printf("A equação de regressão linear é: y = %.2fx + %.2f\n", m, b);

    return 0;
}
