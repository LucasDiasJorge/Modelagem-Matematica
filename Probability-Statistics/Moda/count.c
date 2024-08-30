#include <stdio.h>
#include <stdlib.h>

#define MAX 1000000  // Definindo o tamanho máximo de valores distintos

// Definindo uma struct para armazenar o número e suas ocorrências
typedef struct {
    int number;    // O número em si
    int count;     // A quantidade de ocorrências do número
} NumberCount;

int main() {
    FILE *file;
    int num, max_num = 0;
    NumberCount *freq;

    // Alocando memória para o array de structs
    freq = (NumberCount *)calloc(MAX, sizeof(NumberCount));
    if (freq == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Inicializando a struct
    for (int i = 0; i < MAX; i++) {
        freq[i].number = i;
        freq[i].count = 0;
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
        if (num >= 0 && num < MAX) {  // Verifica se o número está no intervalo válido
            freq[num].count++;
            if (num > max_num) {
                max_num = num;  // Atualiza o maior número encontrado
            }
        }
    }

    // Exibindo o número de ocorrências de cada tipo
    printf("Número de ocorrências:\n");
    for (int i = 0; i <= max_num; i++) {
        if (freq[i].count > 0) {
            printf("Número %d: %d vezes\n", freq[i].number, freq[i].count);
        }
    }

    // Fechando o arquivo e liberando a memória alocada
    fclose(file);
    free(freq);

    return 0;
}
