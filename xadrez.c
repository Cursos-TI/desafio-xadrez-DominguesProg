#include <stdio.h>

/*
  Desafio: Movimentando Xadrez
  - Torre: 5 casas à Direita (for)
  - Bispo: N casas na diagonal Cima Direita (while)
  - Rainha: 8 casas à Esquerda (do-.  - Rainha: 8 casas à Esquerda (do-while)
*/

int main(void) {
    //Constantes de movimento
    const int CASAS_TORRE  = 5;
    const int CASAS_BISPO  = 5;
    const int CASAS_RAINHA = 8;

    //Movimento da TORRE
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= CASAS_TORRE; i++) {
        printf("Direita\n");
    }

    //Movimento do BISPO
    printf("\nMovimento do Bispo:\n");
    int b = 1;
    while (b <= CASAS_BISPO) {
        //diagonal = combinação de duas direções
        printf("Cima\n");
        printf("Direita\n");
        b++;
    }

    //Movimento da RAINHA
    printf("\nMovimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= CASAS_RAINHA);

    return 0;
}