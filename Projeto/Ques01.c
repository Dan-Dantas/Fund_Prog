#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int alvo_peq, alvo_gran, alvo_peq_acert, alvo_gran_acert, total_pontos;

    alvo_peq = 2;
    alvo_gran = 1;

    printf("Digite a quantidade de alvos pequenos acertados: \n");
    scanf("%d", &alvo_peq_acert);
    printf("Digite a quantidade de alvos grandes acertados: \n");
    scanf("%d", &alvo_gran_acert);

    total_pontos = alvo_peq * alvo_peq_acert + alvo_gran * alvo_gran_acert;

 printf("Parabens, sua pontuacao total foi: %d", total_pontos);

return 0;
}
