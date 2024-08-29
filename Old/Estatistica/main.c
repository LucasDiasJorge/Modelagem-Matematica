#include <stdio.h>
#include <stdlib.h>

// Função para calcular a média
double calcularMedia(int arr[], int n) {
    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += arr[i];
    }
    return soma / n;
}

// Função para comparar inteiros (para a função qsort)
int compararInt(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Função para calcular a mediana
double calcularMediana(int arr[], int n) {
    // Ordena o array
    qsort(arr, n, sizeof(int), compararInt);

    if (n % 2 == 0) {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        return arr[n / 2];
    }
}

// Função para calcular a moda
int calcularModa(int arr[], int n) {
    // Ordena o array
    qsort(arr, n, sizeof(int), compararInt);

    int maxCount = 0, moda = arr[0], currentCount = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentCount++;
        } else {
            currentCount = 1;
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            moda = arr[i];
        }
    }
    return moda;
}

int main() {
    int arr[] = {1, 2, 4, 2, 5, 2, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    double media = calcularMedia(arr, n);
    double mediana = calcularMediana(arr, n);
    int moda = calcularModa(arr, n);

    printf("Media: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    printf("Moda: %d\n", moda);

    return 0;
}
