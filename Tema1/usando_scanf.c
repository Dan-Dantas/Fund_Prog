#include <stdio.h>
#include <stdlib.h>

int main(){
    float total, gasolina=4.75;
    int litros;

    printf("Quantos litros voce abasteceu?\n");
    scanf("%d", &litros);
    total=gasolina*litros;

    printf("Abasteci %d litros e paguei RS %.2f.", litros, total);

return 0;
}
