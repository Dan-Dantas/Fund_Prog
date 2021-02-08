#include <stdio.h>
#include <stdlib.h>

int main(){

    int horas, minutos, contagem;


    printf("Informe as horas e em seguida os minutos de agora\n");
    scanf("%d %d", &horas, &minutos);

    contagem=(horas*60)+minutos;

    printf("Ja se passaram %d minutos desde o inicio do dia", contagem);




return 0;
}
