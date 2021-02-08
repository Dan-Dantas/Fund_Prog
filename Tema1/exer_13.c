#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor, taxa, tempo, total;

    taxa=0.0008;
    printf("Informe o valor que voce pretende investir\n");
    scanf("%f", &valor);

    printf("Informe o tempo que pretende deixar investido\n");
    scanf("%f", &tempo);

    total=(valor*taxa*tempo)+valor;

    printf("O valor total investido foi %.2f\n", total);

return 1;
}
