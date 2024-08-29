#include <stdio.h>
#include <stdbool.h>

void crivoEratostenes(int limite) {
    bool numerosPrimos[limite+1];
    for (int i = 0; i <= limite; i++) {
        numerosPrimos[i] = true;
    }
    
    for (int p = 2; p * p <= limite; p++) {
        if (numerosPrimos[p] == true) {
            for (int i = p * p; i <= limite; i += p) {
                numerosPrimos[i] = false;
            }
        }
    }
    
    printf("Numeros primos no intervalo de 2 a %d:\n", limite);
    for (int p = 2; p <= limite; p++) {
        if (numerosPrimos[p]) {
            printf("%d ", p);
        }
    }
    printf("\n");
}

int main() {
    int limite;
    
    printf("Digite um limite para encontrar os numeros primos: ");
    scanf("%d", &limite);
    
    crivoEratostenes(limite);
    
    return 0;
}