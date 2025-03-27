#include <stdio.h>

int main() {
    
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    
    //Movimentação da Torre
    printf("Movimentação da Torre:\n");
    while (torre >= 1)
    {
        printf("Direita\n");
        torre --;
    }

    //Movimentação do Bispo
    printf("\nMovimentação do Bispo:\n");
    do
    {
        printf("Cima Direita\n");
        bispo --;
    } while (bispo >= 1);

    //Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    for (rainha; rainha >= 1; rainha --)
    {
        printf("Esquerda\n");
    }

    //Movimentação do Cavalo
    printf("\nMovimentação do Cavalo\n");
    int i;
    for (i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }
    
    return 0;
}