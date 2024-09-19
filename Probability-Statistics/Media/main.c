#include <stdio.h>

int main() {
    int n, i;
    float soma = 0.0, media;

    // Pergunta ao usuário quantos números deseja inserir
    printf("Quantos números você deseja inserir? ");
    scanf("%d", &n);

    float numeros[n]; // Vetor para armazenar os números

    // Lê os números do usuário
    for(i = 0; i < n; ++i) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i]; // Soma todos os números
    }

    // Calcula a média
    media = soma / n;

    // Exibe o resultado
    printf("A média é: %.2f\n", media);

    return 0;
}
