#include <stdio.h>

/* TORRE */
void movTorre(int casas) {
    if (casas > 0) {
        printf("Casa %d: Direita\n", casas);
        movTorre(casas - 1);
    }
}

/* BISPO */
void movBispo(int casas) {
    if (casas > 0) {
        printf("Casa %d: Cima, Direita\n", casas);
        movBispo(casas - 1);
    }
}

/* RAINHA */
void movRainha(int casas) {
    if (casas > 0) {
        printf("Casa %d: Esquerda\n", casas);
        movRainha(casas - 1);
    }
}

/* CAVALO */
void movCavalo(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        printf("Cima\n");
        printf("Esquerda\n\n");
        movCavalo(casas - 1);
    }
}

int main() {

    printf("*** Movimentacao da Torre ***\n\n");
    movTorre(5);

    printf("\n*** Movimentacao do Bispo ***\n\n");
    movBispo(5);

    printf("\n*** Movimentacao da Rainha ***\n\n");
    movRainha(8);

    printf("\n*** Movimentacao do Cavalo ***\n\n");
    movCavalo(1);

    return 0;
}
