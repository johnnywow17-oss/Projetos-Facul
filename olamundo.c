#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhajogador, escolhacomputador;

    srand(time(0));
    printf("*** Bem vindo ao Jogo do Johnny! ***\n");
    printf("Menu inicial:\n");
    printf("Escolha uma opção\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    scanf("%d", &escolhajogador);

    escolhacomputador = rand() % 3 + 1;
    printf("Jogador escolheu: %d - ", escolhajogador);
    printf("Computador escolheu %d\n", escolhacomputador);

    if(escolhajogador == escolhacomputador){
        printf("Jogo empatado!\n");
    } else if (
        (escolhajogador == 1 && escolhacomputador == 3) || 
        (escolhajogador == 2 && escolhacomputador == 1) || 
        (escolhajogador == 3 && escolhacomputador == 2))
    {   printf("Parabéns! Você é o grande vencedor!\n");
    } else {
        printf("Que pena! Você perdeu");

    }




    
}
