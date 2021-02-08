#include <stdio.h>
#include <stdlib.h>

int main(){

    int vit, emp, der, tvit, temp, tder, tpvit, tpemp, tpder, tpG, totalJogos;

    vit=3;
    emp=1;
    der=0;

    printf("Informe o numero total de vitorias, empates e derrotas\n");
    scanf("%d\n %d\n %d", &tvit, &temp, &tder);

    tpvit=vit*tvit;
    tpemp=emp*temp;
    tder=der*tder;

    tpG=tpvit+tpemp+tder;

    totalJogos=tvit+temp+tder;

    printf("Foram no total %d jogos, acumulando um total de pontos de %d, sendo %d pontos por vitorias e %d pontos por empate\n", totalJogos, tpG, tpvit, tpemp);

return 0;

}
