#include <stdio.h>
#include <stdlib.h>

int main(){

    int parcelas;
    float pago, valortotal;

    printf ("Digite o numero de parcelas\n");
    scanf("%d", &parcelas);

    printf("Dgite o valor de cada uma das parcelas\n");
    scanf("%f", &pago);

    valortotal = parcelas * pago;
    printf("O valor ja pago foi %.2f \n", valortotal);


return 0;
}
