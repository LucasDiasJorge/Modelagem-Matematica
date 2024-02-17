#include <stdio.h>
#include <math.h>

double funcao(double x) {
    return sin(x); // Aqui você pode colocar a expressão da função desejada
}

int main() {
    double a = 0; // Ponto para o qual queremos calcular o limite
    double limite;

    limite = funcao(a);

    printf("O limite da função para x -> %lf é %lf\n", a, limite);

    return 0;
}
