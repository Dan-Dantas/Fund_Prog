#include <stdio.h>
#include <stdlib.h>

int main (void){
    float nun1, nun2, soma, sub, div, mult, calc;

    printf("Informe seu primeiro numero: \n");
    scanf("%f", &nun1);

    printf("Informe seu segundo numero: \n");
    scanf("%f", &nun2);

    printf("Qual operacao voce pretende calcular?\n");
    printf("Soma =1, subtracao=2, divisao=3 ou multiplicacao=4?");
    scanf("%f", &calc);

    switch (calc){
        case 1:
            if(calc==1){
                soma=nun1+nun2;
                printf("O resultado dos seus calculos foi: %.2f", soma);
            }
        break;
        case 2:
            if(calc==2){
                sub=nun1-nun2;
                printf("O resultado dos seus calculos foi: %.2f", sub);
        break;
        case 3:
            if(calc==3){
                div=nun1/nun2;
                printf("O resultado dos seus calculos foi: %.2f", div);
        break;
        case 4:
            if(calc==4){
                mult=nun1*nun2;
                printf("O resultado dos seus calculos foi: %.2f", mult);
        break;
        default:
            printf("Opcao invalida!!"\n);
    }


return 0;
}
