#include <stdio.h>

// Definição das funções
double funcao1(double x) {
    return 2 * x + 1;
}

double funcao2(double x) {
    return (x - 1) / 2;
}

// Verifica a inversibilidade de duas funções
int saoInversiveis(double (*f)(double), double (*g)(double)) {
    // Verifica a bijetividade da função f
    // (1) Verifica se f é injetiva (crescente ou decrescente)
    double x1 = 0.0;
    double x2 = 1.0;
    double y1 = f(x1);
    double y2 = f(x2);
    if (y1 == y2) {
        return 0;  // Não é injetiva
    }

    // (2) Verifica se f é sobrejetiva (cobrindo todo o seu codomínio)
    double minY = y1 < y2 ? y1 : y2;
    double maxY = y1 > y2 ? y1 : y2;
    double epsilon = 1e-6;  // Tolerância para comparação de números de ponto flutuante
    for (double y = minY; y <= maxY; y += epsilon) {
        double x = 0.0;
        while (x <= 1.0) {
            if (fabs(f(x) - y) < epsilon) {
                break;  // Encontrou um x para o y
            }
            x += epsilon;
        }
        if (x > 1.0) {
            return 0;  // Não é sobrejetiva
        }
    }

    // Verifica se a função g é a inversa de f
    for (double x = 0.0; x <= 1.0; x += epsilon) {
        if (fabs(g(f(x)) - x) > epsilon || fabs(f(g(x)) - x) > epsilon) {
            return 0;  // Não é inversa
        }
    }

    return 1;  // Ambas as funções são inversíveis
}

int main() {
    if (saoInversiveis(funcao1, funcao2)) {
        printf("As funcoes sao inversiveis.\n");
    } else {
        printf("As funcoes nao sao inversiveis.\n");
    }

    return 0;
}
