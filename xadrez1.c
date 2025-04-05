#include <stdio.h>

// Movimento da Torre com recursividade

void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// Movimento do Bispo com recursividade

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Diagonal superior direita\n");
    moverBispoRecursivo(casas - 1);
}

// Movimento do Bispo com loops aninhados

void moverBispoComLoops(int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {         // vertical
        for (int j = 0; j < colunas; j++) {    // horizontal
            printf("Diagonal superior direita\n");
        }
    }
}

// Movimento da Rainha com recursividade (mistura de Torre e Bispo)

void moverRainhaCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverRainhaCima(casas - 1);
}

void moverRainhaDiagonal(int casas) {
    if (casas == 0) return;
    printf("Diagonal superior direita\n");
    moverRainhaDiagonal(casas - 1);
}

// Movimento do Cavalo com loops aninhados e controle de fluxo

void moverCavalo() {
    // Simula movimentos válidos do cavalo: 2 cima + 1 direita

    int movimentos = 3;

    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < movimentos; j++) {
            if (i == j) continue; // pular movimentos inválidos
            if (i + j > 2) break; // simula limite de movimento
            printf("Cavalo se move em L: 2 cima, 1 direita\n");
        }
    }
}

int main() {
    int casasTorre = 3;
    int casasBispo = 2;
    int linhasBispo = 2;
    int colunasBispo = 2;
    int casasRainha = 3;
    int casasCavalo = 2;
    int UmCavalo = 1;

    printf("Movimento da Torre:\n");
    moverTorreCima(casasTorre);
    moverTorreDireita(casasTorre);
    printf("\n");

    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    printf("Movimento do Bispo (com loops aninhados):\n");
    moverBispoComLoops(linhasBispo, colunasBispo);
    printf("\n");

    printf("Movimento da Rainha: \n");
    moverRainhaCima(casasRainha);
    moverRainhaDiagonal(casasRainha);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(casasCavalo, UmCavalo);
    printf("\n");

    return 0;
}