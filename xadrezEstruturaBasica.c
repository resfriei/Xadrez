#include <stdio.h>

 int main() {
 
     int i;
         
     printf("## Bem-vindo ao jogo de xadrez! ##\n\n");
     printf("* Movimentando as peças Torre, Bispo, Rainha * \n\n");
     
     // Movimentando a Torre (5 casas para a direita) utilizando for:

     printf("Movimentando a Torre 5 casas na horizontal à direita\n");

     for (i = 1; i <= 5; i++) 
     {
         printf("TORRE: %d Direita\n", i);
     }

     
     // Movimentando o Bispo (5 casa na diagonal, para cima e a direita) utilizando while
 
     printf("\nMovimentando o Bispo 5 casas na diagonal para cima e à direita\n");

     i = 1;
    
     while (i <= 5)
     {
        printf("BISPO: %d Cima e à direita\n", i);
         i++;
     }

 
     // Movimentando a Rainha (8 casas para a esquerada) utilizando do-while

     printf("\nMovimentando a Rainha 8 casas na horizontal para à esquerda\n");

     i = 1;

     do {
         printf("RAINHA: %d Esquerda\n", i);
         i++; 
     } while (i <= 8);


     // Movimentando o Cavalo (duas casas para baixo e uma para a esquerda) utilizando for e whilee
 
    int movBaixo = 2;
    int movEsquerda = 1;

    // Primeiro loop: duas casas para baixo usando for

    printf("\nMovimentando o Cavalo 2 casas para baixo e uma à esquerda\n");

    for (int i = 1; i <= movBaixo; i++) {
        printf("CAVALO: %d Baixo\n", i);
    }

    // Segundo loop: uma casa para a esquerda usando while

    int j = 1;
    while (j <= movEsquerda) {
        printf("CAVALO: %d Esquerda\n", j);
        j++;
    }


     printf("## Fim do jogo de xadrez! ##\n");

     return 0;
     
 }
