#include <stdio.h>
#include <stdlib.h>

int main (void){

    float gas, cons, dist, valor;

    printf("Digite qual e o preco da Gasolina?\n");
    scanf("%f",&gas);
    printf("Digite qual a media de consumo do seu veiculo?\n");
    scanf("%f",&cons);
    printf("Digite qual a distancia percorrida?\n");
    scanf("%f",&dist);


    valor = dist /cons * gas;

    printf("O preco final do combustivel eh %.2f",valor);


return 0;
}




