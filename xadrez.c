#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
      const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;

    int i;

    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\nMovimento da Torre:\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Utilizando loops aninhados para simular o movimento em L

    printf("\nMovimento do Cavalo:\n");

    int baixo = 0;
    int esquerda = 0;

    // Loop externo (for) → movimento vertical (2 casas para baixo)
    for (baixo = 0; baixo < 2; baixo++) {

        // Loop interno (while) → movimento horizontal (1 casa para esquerda)
        esquerda = 0;
        while (esquerda < 1) {

            printf("Baixo Esquerda\n");
            esquerda++;
        }
    }

    // Nível Mestre

    return 0;
}
