#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i;
    int voo[30][2];


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
