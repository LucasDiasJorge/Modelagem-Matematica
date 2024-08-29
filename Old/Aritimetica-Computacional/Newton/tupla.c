#include <stdio.h>

// Definição da estrutura "tupla"
struct Tupla {
    int inteiro;
    double ponto_flutuante;
    char texto[50];
};

int main() {
    // Criando uma instância da estrutura "Tupla"
    struct Tupla minha_tupla;
    
    // Atribuindo valores aos campos da estrutura
    minha_tupla.inteiro = 10;
    minha_tupla.ponto_flutuante = 3.14;
    strcpy(minha_tupla.texto, "Olá");

    // Acessando os valores da estrutura
    printf("Inteiro: %d\n", minha_tupla.inteiro);
    printf("Ponto Flutuante: %lf\n", minha_tupla.ponto_flutuante);
    printf("Texto: %s\n", minha_tupla.texto);

    return 0;
}
