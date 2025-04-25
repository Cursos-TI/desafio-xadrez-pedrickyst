#include <stdio.h>
 
int main() {
  
   int torre = 1, bispo = 1;

   while (torre <= 5)
   {
        printf("%d Torre, para a Direita!\n", torre);
        ++torre;
   }

   printf("\n");

   do
   {
    printf("%d Bispo, Cima Direita!\n", bispo);
    ++bispo;
   } while (bispo <= 5);

   printf("\n");
   
   for (int rainha = 1 ; rainha <= 8; rainha++)
   {
    printf("%d Rainha, Esquerda!\n", rainha);
   }    
   
    return 0;
}