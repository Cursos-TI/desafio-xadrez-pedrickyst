#include <stdio.h>
 
void moverTorre(int casas) {

    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }   
    
}

void moverRainha(int casas) {

    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }   
    
}

void moverBispo(int casas) {

    if (casas > 0)
    {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }   
    
}

int main (){

    int linha = 1;
    int cavalo = 1;

    printf("Movimentos da Torre: \n");
    moverTorre(5);
    printf("\n");    

    printf("Movimentos do Bispo: \n");
    moverBispo(5);
    printf("\n");

    printf("Movimentos da Rainha: \n");
    moverRainha(8);
    printf("\n");

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