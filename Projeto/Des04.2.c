#include <stdio.h>
#include <stdlib.h>

int main(void){

    int opcao, quant;
    float valor, preco;

    preco=12.5;

    printf("Bem vindo ao sistema do Cinema do Shopping.\n");
    printf("O cada opcao de filme custa R$ 12,5.\n");
    printf("Temos as seguintes opcoes:\n");
    printf("Opção 1: Vingadores 4 – da Marvel\n");
    printf("Opção 2: Como Treinar o Seu Dragão 3\n");
    printf("Opção 3: Dumbo\n");
    printf("Opção 4: Shazam\n");

    printf("Quantos filmes voce pretende assistir?\n");
    scanf("%d", &quant);

    valor=preco*quant;

    printf("Voce tera que pagar R$ %.2f para assistir %d filmes. \n", valor, quant);
return 0;
}
