#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i;
    float prodt[2][2];
    float total;

    for(i=0;i<2;i++){
        printf("Informe a quantidade de produtos %d: \n", i+1);
        scanf("%f", &prodt[i][0]);

        printf("Informe o valor unitario do produto %d: \n", i+1);
        scanf("%f", &prodt[i][1]);
        }

    for(i=0;i<2;i++){
         printf("A quantidade de produto comprado foi %.0f com o preco unitario de R$ %.2f, a um total de R$ %.2f\n", prodt[i][0], prodt[i][1], prodt[i][0]*prodt[i][1]);
        }
    total=(prodt[0][0]*prodt[0][1])+(prodt[1][0]*prodt[1][1]);

    printf("O total da sua compra foi R$ %.2f\n", total);
return 0;
}
