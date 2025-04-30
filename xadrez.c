#include <stdio.h>

void moverTorre(int casas) { //recursividade Torre.

    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }   
    
}

void moverRainha(int casas) {//recursividade Rainha.

    if (casas > 0)
    {
        printf("Direita\n");
        moverRainha(casas - 1);
    }   
    
}

void moverBispo(int casas) { //recursividade Bispo.

    if (casas > 0)
    {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }   
    
}

int main (){

    int linha = 1; //Incrementos para as informações do loop em do do while ("Cavalo linas 52 à 63").
    int cavalo = 1;

    printf("Movimentos da Torre: \n"); //Comando para loop da recursividade Torre.
    moverTorre(5);
    printf("\n");    

    printf("Movimentos do Bispo: \n"); //Comando para loop da recursividade Bispo.
    moverBispo(5);
    printf("\n");

    printf("Movimentos da Rainha: \n"); //Comando para loop da recursividade Rainha.
    moverRainha(8);
    printf("\n");

    printf("\n");
    printf("Jogada do Cavalo!\n"); //Inf da peça que fará o movimento.
    do
    {
        int cavalo = 1;
        do
        {
            printf("%d Cima!\n", linha + cavalo); //print para o loop do Cavalo "para cima".
            cavalo++;
        } while (cavalo <= linha);
        printf("%d Direita!\n", linha); //print para o loop do Cavalo "para Direita".
        linha++;
        
    } while (linha <= cavalo);

        
    return 0;
}