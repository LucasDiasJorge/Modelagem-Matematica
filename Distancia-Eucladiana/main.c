#include <stdio.h>
#include <math.h>

double calcularDistanciaEuclidiana(double x1, double y1, double z1, double x2, double y2, double z2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
}

int main() {
    double x1, y1, z1;
    double x2, y2, z2;

    // Obtenha as coordenadas dos dois pontos
    printf("Digite as coordenadas do primeiro ponto (x y z): ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);

    printf("Digite as coordenadas do segundo ponto (x y z): ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    // Calcule a distância euclidiana
    double distancia = calcularDistanciaEuclidiana(x1, y1, z1, x2, y2, z2);

    // Exiba o resultado
    printf("A distância euclidiana entre os pontos é: %lf\n", distancia);

    return 0;
}
