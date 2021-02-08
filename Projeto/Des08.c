#include <stdio.h>
#include <stdlib.h>

int main(void){
    float dolar, real, consul, contador=0;


    printf("Digite quanto custa o dolar em real: \n");
    scanf("%f", &dolar);

    while (dolar!=0){

        printf("Digite o valor em dolar do produto que voce quer comprar: \n");
        scanf("%f", &consul);

        real=consul*dolar;

        printf("O produto que voce pretende compara custa R$ %.2f\n", real);

        contador++;

    }

    printf("Voce esta muito consumista, fez %.0f consultas de valores\n", contador);

return 0;
}
