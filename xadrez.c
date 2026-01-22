

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    #include <stdio.h>

int main() {

    int MOVTORRE = 5;
    int MOVBISPO = 5;
    int MOVRAINHA = 8;

    int i;

    // TORRE → FOR
    // Move 5 casas para a direita
  
    printf("Movimentacao da Torre:\n");
    for (i = 1; i <= MOVTORRE; i++) 
    {
        printf("Casa %d: Direita\n\n", i);
    }

     
    // BISPO → WHILE
    // Move 5 casas na diagonal (Cima + Direita)
   
    printf("Movimentacao do Bispo:\n");
    i = 1;
    while (i <= MOVBISPO) 
    {
        printf("Casa %d: Cima, Direita\n\n", i);
        i++;
    }

  
    // RAINHA → DO WHILE
    // Move 8 casas para a esquerda

    printf("Movimentacao da Rainha:\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n\n", i);
        i++;
    } while (i <= MOVRAINHA);

    return 0;
}
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

 
