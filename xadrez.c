#include <stdio.h>

int main(){

    int linha = 1, coluna = 1;
    int torre = 1, bispo = 1, cavalo = 1; 

    printf("Jogada do Torre!\n");
    printf("\n");

    while (torre <= 5)
    {
        printf("%d Direita!\n", torre);
        torre++;
    }

    printf("\n");
    printf("Jogada do Bispo!\n");
    printf("\n");

    do
    {
        printf("%d Cima, Direita!\n", bispo);
        bispo++;
    } while (bispo <= 5);
    
    printf("\n");
    printf("Jogada do Rainha!\n");
    printf("\n");

    for (int rainha = 1; rainha <= 8; rainha++)
    {
        printf("%d Esquerda!\n", rainha);
    }

    printf("\n");
    printf("Jogada do Cavalo!\n");
    printf("\n");
    do
    {
        int cavalo = 1;
        do
        {
            printf("%d Baixo!\n", linha + cavalo);
            cavalo++;
        } while (cavalo <= linha);
        printf("%d Esquerda!\n", linha);
        linha++;
        
    } while (linha <= cavalo);
    

    return 0;
}