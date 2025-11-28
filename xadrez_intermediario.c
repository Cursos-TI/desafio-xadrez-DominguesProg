
#include <stdio.h>

/*
  Desafio: Movimentando Xadrez
  - Torre: 5 casas à Direita (for)
  - Bispo: N casas na diagonal Cima Direita (while)
  - Rainha: 8 casas à Esquerda (do-while)
  - Cavalo: movimento em "L" (for + while) -> 2 Baixo, 1 Esquerda
*/

int main(void) {
    // Constantes de movimento
    const int CASAS_TORRE  = 5;
    const int CASAS_BISPO  = 5;
    const int CASAS_RAINHA = 8;

    // Movimento da TORRE
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= CASAS_TORRE; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO
    printf("\nMovimento do Bispo:\n");
    int b = 1;
    while (b <= CASAS_BISPO) {
        // diagonal = combinação de duas direções
        printf("Cima\n");
        printf("Direita\n");
        b++;
    }

    // Movimento da RAINHA
    printf("\nMovimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= CASAS_RAINHA);

    const int CASAS_CAVALO_BAIXO    = 2; // duas casas para baixo
    const int CASAS_CAVALO_ESQUERDA = 1; // uma casa para a esquerda

    printf("Movimento do Cavalo:\n");

    // O 'for' percorre os 2 segmentos do "L":
    // segmento 1 -> vertical (Baixo), segmento 2 -> horizontal (Esquerda)
    for (int segmento = 1; segmento <= 2; segmento++) {
        int passosRestantes = (segmento == 1) ? CASAS_CAVALO_BAIXO : CASAS_CAVALO_ESQUERDA;

        // 'while' interno repete a direção
        while (passosRestantes > 0) {
            if (segmento == 1) {
                printf("Baixo\n");     // primeira parte do "L": 2 Baixo
            } else {
                printf("Esquerda\n");  // segunda parte do "L": 1 Esquerda
            }
            passosRestantes--;
        }
        return 0;
    }

    
}