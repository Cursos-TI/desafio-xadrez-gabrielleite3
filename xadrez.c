#include <stdio.h> //TEMA 3 NOVATO
    int main(){
      
      //Variáveis.
        int t = 1, r = 1, b = 1;

         //Movimento da Torre com "Do - While".

        printf("TORRE: 5 casas para a direita.\n");//Imprime o nome peça que será movimentada e quantidade de movimentos.

        do // O "do"  garante "uma" execuçao do codigo.
        {  
            printf("Direita\n");//Printa a direção do movimento da peça.
            t++; //Incremento da variavel "t" dentro do "do" pra finalizar o loop.
        } while (t <= 5); //codição que define a quantidade de movimentos da torre e finaliza o loop. 
//_____________________________________________________________________________________________________________________________________________________//

        //Movimento da rainha com "While".

        printf("\nRAINHA: 8 casas para a esquerda.\n");//Imprime o nome peça que será movimentada e quantidade de movimentos.

        while (r <= 8)//condição que define a quantidade de movimentos da rainha e finaliza o loop.
        {
          printf("Esquerda\n");////Printa a direção do movimento da peça.
          r++;//incremento da variável "r", pra finalizar o loop.
        }
//______________________________________________________________________________________________________________________________________________________//

        //Movimento do bispo com "For".

        printf("\nBISPO: 5 casas na diagonal para cima e à direita.\n"); //Imprime o nome peça que será movimentada e quantidade de movimentos.

        for (b = 1; b <= 5; b++) //variavel, condição e incremento
        {
          printf("Cima, Direita\n");
        }
        

     return 0;       
    }