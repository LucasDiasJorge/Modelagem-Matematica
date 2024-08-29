#include <stdio.h>
#include <stdlib.h>

#define MAX 1000000  // Definindo o tamanho máximo de valores distintos

int main() {
    FILE *file;
    int num, max_num = 0;
    int *freq;

    // Alocando memória para o array de frequências
    freq = (int *)calloc(MAX, sizeof(int));
    if (freq == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Abrindo o arquivo para leitura
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        free(freq);
        return 1;
    }

    // Lendo os números do arquivo e contando a frequência
    while (fscanf(file, "%d", &num) != EOF) {
        freq[num]++;
        if (num > max_num) {
            max_num = num;  // Atualiza o maior número encontrado
        }
    }

    // Exibindo o número de ocorrências de cada tipo
    printf("Número de ocorrências:\n");
    for (int i = 0; i <= max_num; i++) {
        if (freq[i] > 0) {
            printf("Número %d: %d vezes\n", i, freq[i]);
        }
    }

    // Fechando o arquivo e liberando a memória alocada
    fclose(file);
    free(freq);

    return 0;
}
