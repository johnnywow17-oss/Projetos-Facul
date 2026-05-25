#include <stdio.h>

// =====================================
// TORRE
// Recursividade + FOR
// Move 5 casas para a direita
// =====================================

void movertorre(int casas){

    if(casas > 0){

        for(int i = 0; i < 1; i++){

            printf("Direita\n");
        }

        movertorre(casas - 1);
    }
}


// =====================================
// BISPO
// Recursividade + WHILE
// Move 5 casas na diagonal
// =====================================

void moverbispo(int casas){

    if(casas > 0){

        int movimento = 1;

        while(movimento > 0){

            printf("Cima Direita\n");

            movimento--;
        }

        moverbispo(casas - 1);
    }
}


// =====================================
// CAVALO
// Recursividade + FOR
// Move em "L"
// 2 casas para cima e 1 para direita
// =====================================

void movercavalo(int movimentos){

    if(movimentos > 0){

        for(int i = 0; i < 2; i++){

            printf("Cima\n");
        }

        printf("Direita\n");

        movercavalo(movimentos - 1);
    }
}


// =====================================
// RAINHA
// Recursividade + DO WHILE
// Move 8 casas para esquerda
// =====================================

void moverrainha(int casas){

    if(casas > 0){

        int movimento = 1;

        do{

            printf("Esquerda\n");

            movimento--;

        } while(movimento > 0);

        moverrainha(casas - 1);
    }
}


// =====================================
// FUNÇÃO PRINCIPAL
// =====================================

int main(){

    printf("=== Movimento da Torre ===\n");
    movertorre(5);

    printf("\n=== Movimento do Bispo ===\n");
    moverbispo(5);

    printf("\n=== Movimento do Cavalo ===\n");
    movercavalo(1);

    printf("\n=== Movimento da Rainha ===\n");
    moverrainha(8);

    return 0;
}