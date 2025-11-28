
#include <stdio.h>

int main() {
    const int CASAS_TORRE = 5;
const int CASAS_BISPO = 5;
const int CASAS_RAINHA = 8;
const int CASAS_CAVALO_BAIXO = 2;
const int CASAS_CAVALO_ESQUERDA = 1;

// Função recursiva para Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Cavalo com loops aninhados
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    for (int segmento = 1; segmento <= 2; segmento++) {
        int passos = (segmento == 1) ? CASAS_CAVALO_BAIXO : CASAS_CAVALO_ESQUERDA;
        for (int i = 0; i < passos; i++) {
            if (segmento == 1)
                printf("Baixo\n");
            else
                printf("Esquerda\n");
        }
    }
}

// Bispo com loops aninhados
void moverBispoLoops(int casas) {
    printf("Movimento Bispo (loops):\n");
    for (int i = 0; i < casas; i++) {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
}
    
    printf("Movimento Torre:\n");
    moverTorre(CASAS_TORRE);
    printf("\n");

    printf("Movimento Bispo (recursivo):\n");
    moverBispo(CASAS_BISPO);
    printf("\n");

    printf("Movimento Rainha:\n");
    moverRainha(CASAS_RAINHA);
    printf("\n");

    moverCavalo();
    printf("\n");

    moverBispoLoops(CASAS_BISPO);
    return 0;

}
