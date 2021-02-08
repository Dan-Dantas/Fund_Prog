#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int i = 1, minutos, dias;

    printf("Qual a quantidade de dias que faltam para a maratona?\n");
    scanf("%d", &dias);

    printf("Quantos minutos voce pretende comecar seus treinos ate a maratona?\n");
    scanf("%d", &minutos);

    for(i=1;dias>1;i++){

        printf("Voce devera treinar nos dias %d miinutos %d:\n", i, minutos);
        minutos = minutos - 5;
    }


return 0;
}
