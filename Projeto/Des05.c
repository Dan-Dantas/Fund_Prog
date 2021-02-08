#include <stdio.h>
#include <stdlib.h>

int main(void){

    int qvenda;
    float vvenda, media, sala, meta, metb;

    qvenda=0;
    vvenda=0;
    media=0;
    sala=0;

    meta=10000;
    metb=55000;

    printf("Quantas vendas voce fez esse mes?\n");
    scanf("%d", &qvenda);

    printf("Qual o valor de suas vendas esse mes?\n");
    scanf("%2f", &vvenda);

    media=vvenda/qvenda;

    if (vvenda >= metb && vvenda<=meta){
        printf("Voce recebera uma comissao de 2por cento sobre o valor total da sua venda.\n");
        printf("Voce vendeu %d produtos, a um preco medio de %f, o valor do seu salario esse mes sera de R$ %f.", qvenda, media, vvenda*0.02);
    }

    if (vvenda> meta){
        printf("Voce recebera uma comissao de R$ 5.000.\n");
    }

    if (vvenda<metb){
        printf("Voce recebera uma comissao comissão fixa de R$ 100,00 por venda.\n");
        printf("Voce vendeu %d produtos, o valor do seu salario esse mes sera de R$ %d.", qvenda, qvenda* 100);
    }
return 0;

}
