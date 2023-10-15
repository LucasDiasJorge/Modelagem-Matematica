#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Solicita ao usuário os coeficientes da equação quadrática
    printf("Digite o coeficiente 'a': ");
    scanf("%lf", &a);
    printf("Digite o coeficiente 'b': ");
    scanf("%lf", &b);
    printf("Digite o coeficiente 'c': ");
    scanf("%lf", &c);

    // Calcula o discriminante
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Duas raízes reais distintas
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("As raízes são: %.2lf e %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // Uma raiz real (raiz dupla)
        root1 = -b / (2 * a);
        printf("A raiz é: %.2lf\n", root1);
    } else {
        // Nenhuma raiz real (raízes complexas)
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("As raízes complexas são: %.2lf + %.2lfi e %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
