#include <stdio.h>
#include <math.h>

int main() {
    double hipotenusa, cateto1, cateto2;

    // Solicita a entrada da hipotenusa e do primeiro cateto
    printf("Digite o valor da hipotenusa: ");
    scanf("%lf", &hipotenusa);

    printf("Digite o valor do primeiro cateto: ");
    scanf("%lf", &cateto1);

    // Calcula o segundo cateto usando a fórmula de Pitágoras
    cateto2 = sqrt(hipotenusa * hipotenusa - cateto1 * cateto1);

    // Exibe o valor do segundo cateto
    printf("O segundo cateto é: %lf\n", cateto2);

    return 0;
}
