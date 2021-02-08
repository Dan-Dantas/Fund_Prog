#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i;
    int voo[30][2];

    int sp1, rj2, bh3

    printf("Destinos de viagens:"\n);
    printf("1)Sao Paulo:"\n);
    printf("2) Rio de Janeiro:"\n);
    printf("3) Belo Horizonte:"\n);
    printf("4) Curitiba:"\n);
    printf("5) Florianopolis:"\n);
    printf("6) Porto Alegre:"\n);
    printf("7) Manaus:"\n);
    printf("8)Porto Velho"\n);
    printf("9) Salvador:"\n);
    printf("10) Fortaleza:"\n);

    for(i=0;i<30;i++){
        printf("Informe qual e o numero do voo %d: \n", i+1);
        scanf("%d", &voo[i][0]);

        printf("Informe a tempo de duracao do voo %d: \n", i+1);
        scanf("%d", &voo[i][1]);
        }

    for(i=0;i<30;i++){
         printf("O numero do voo e %d com duracao de %d\n", voo[i][0], voo[i][1]);
        }

return 0;
}
