#include <stdio.h>

int main(){

    // Not (~)
    // Você pode usar o operador de negação lógica ! em C para inverter o valor de uma expressão lógica. Por exemplo:
    int estaChovendo = 0; // 0 representa "não está chovendo"
    int naoEstaChovendo = !estaChovendo; // Agora nãoEstaChovendo será igual a 1 (verdadeiro).

    // And (^)
    //Você pode usar o operador lógico && para expressar a conjunção. Ele retorna verdadeiro somente se ambas as expressões forem verdadeiras:
    int estaEnsolarado = 1; // 1 representa "ensolarado"
    int temperaturaAlta = 1; // 1 representa "temperatura alta"
    int estaQuente = estaEnsolarado && temperaturaAlta; // Esta condição só será verdadeira se ambas as variáveis forem verdadeiras.

    // Or (v)
    // O operador || é usado para expressar a disjunção. Ele retorna verdadeiro se pelo menos uma das expressões for verdadeira:
    int estaChovendo = 1; // 1 representa "está chovendo"
    int estaNublado = 0; // 0 representa "não está nublado"
    int climaRuim = estaChovendo || estaNublado; // Isso será verdadeiro se pelo menos uma das variáveis for verdadeira.

    // Implies (->)
    // A implicação pode ser expressa de várias maneiras em C, mas comumente é usada com um if-then. Por exemplo:
    int estudar = 1; // 1 representa "estudar"
    int passarNoTeste = 1; // 1 representa "passar no teste"

    if (estudar) {
        passarNoTeste = 1; // Se estudar, então passará no teste.
    }

    // Iff (<->)    
    // A dupla implicação (if and only if) pode ser implementada com duas condições. Por exemplo:
    int ganharOJogo = 1; // 1 representa "ganhar o jogo"
    int marcarUmGol = 1; // 1 representa "marcar um gol"

    if (ganharOJogo == marcarUmGol) {
        // A relação "ganhar o jogo se e somente se marcar um gol" é verdadeira.
    }


    return 0;
}