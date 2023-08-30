#include <stdio.h>
#include <math.h>

double func(double x) {
    return cos(x);
}

int main() {
    int n = 10; // Número de retângulos
    double a = 0.0; // Limite inferior
    double b = 1.0; // Limite superior
    double sum = 0.0;
    double width = (b - a) / n;

    for (int i = 0; i < n; i++) {
        double x = a + i * width;
        sum += func(x) * width;
    }

    printf("Aproximação da integral de cos(x) de 0 a 1 usando Retângulos: %.3f\n", sum);

    return 0;
}
