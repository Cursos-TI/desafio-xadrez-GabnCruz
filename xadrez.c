#include <stdio.h>

void movertorre(int casas) //Recursividade para movimentação da torre
{
    if (casas > 0)
    {
        printf("Direita\n");
        movertorre(casas - 1);
    }
}

void moverbispo (int casas) //Recursividade para movimentação do bispo
{
    if (casas > 0)
    {
        printf("Cima Direita\n");
        moverbispo(casas - 1);
    }   
}

void moverrainha (int casas) //Recursividade para movimentação da rainha
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
    
}

int main() {
    
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    
    //Movimentação da Torre
    printf("Movimentação da Torre:\n");
    movertorre(torre);

    //Movimentação do Bispo com loops aninhados
    printf("\nMovimentação do Bispo (loop aninhado):\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Cima "); //Eixo vertical

        for (int j = 0; j < 1; j++)
        {
            printf("Direita"); //Eixo horizontal
        }
        printf("\n");
    }
    
    //Movimentação do Bispo com Recursividade
    printf("\nMovimentação do Bispo (Recursivo):\n");
    moverbispo(bispo);

    //Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    moverrainha(rainha);

    //Movimentação do Cavalo
    printf("\nMovimentação do Cavalo\n");
    for (int i = 0; i < 2; i++) { // Movimento de duas casas para cima
        printf("Cima\n");
    }

    for (int j = 0; j < 1; j++) { // Movimento de uma casa para a direita
        printf("Direita\n");
    }
    
    return 0;
}