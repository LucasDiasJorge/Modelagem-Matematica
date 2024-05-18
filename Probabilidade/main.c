#include <stdio.h>

int main() {
  int a, omega;  // a = n(A), omega = n(Omega)
  float probabilidade; // P(A) = n(A)/n(Omega)

  printf("Digite o valor de omega: ");
  if (scanf("%d", &omega) != 1 || omega <= 0) {
    printf("Erro: Valor de omega é inválido.\n");
    return 1;
  }

  printf("Digite o número de resultados favoráveis: ");
  if (scanf("%d", &a) != 1 || a < 0 || a > omega) {
    printf("Erro: Número de resultados favoráveis inválido.\n");
    return 1;
  }

  probabilidade = (float) a / omega;

  printf("Probabilidade entre (0 - 1): %f\n", probabilidade);
  printf("Probabilidade (%): %.2f%%\n", probabilidade * 100);

  return 0;
}
