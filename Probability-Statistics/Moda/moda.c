#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 1000000  // Definindo o tamanho máximo de valores distintos

int main() {
    FILE *file;
    int num, max_num = 0;
    int *freq, mode = 0, max_count = 0;

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

    // Determinando a moda
    for (int i = 0; i <= max_num; i++) {
        if (freq[i] > max_count) {
            max_count = freq[i];
            mode = i;
        }
    
    }

    // Fechando o arquivo e liberando a memória alocada
    fclose(file);
    free(freq);

    printf("A moda é %d e aparece %d vezes.\n", mode, max_count);

    return 0;
}
