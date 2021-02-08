#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetn, vgas, absEtn, absGas, tot_etn, tot_gas, pago;

    printf("Digite o valor do etanol e o valor da gasolina. \n");
    scanf("%f \n %f", &vetn, &vgas);

    printf("Digite a quantidade de etanol e gasolina abastecida. \n");
    scanf ("%f \n %f", &absEtn, &absGas);

    tot_etn=vetn*absEtn;
    tot_gas=vgas*absGas;

    pago=tot_etn+tot_gas;

    printf("O valor total do abastecimento foi %.2f. \n", pago);

    return 0;
}
