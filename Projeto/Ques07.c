#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i,n, totmin=0, dias15=0;
    int dias[30];
    for(i=0;i<30;i++){
        printf("Digite os minutos de treino %d:\n", i+1);
        scanf("%d", &dias[i]);
        }

    for(i=0;i<30;i++){
            if(dias[i]>=14)
            dias15=dias15+dias[i];
            }
        printf("Voce trenou %d minutos nos ultimos 15 dias do mes.\n", dias15);

        printf("Seus treinos foram: %d,", dias[i]);
        printf("%f", dias[15]);

return 0;
       }

//// }
    //for(i=0;i>15 && i<30;i++){
        //dias15=dias15+dias;
       // printf("Voce treinou nos ultimos 15 dias %d minutos por dia\n", dias15);

    /*float prod[2][10];
    float total = 0;
    int TAM = 10;
    for(i=0;i<TAM;i++){
        printf("Informe o preco do produto %d: \n", i+1);
        scanf("%f", &prod[i][0]);

        printf("Informe a quantidade do produto %d: \n", i+1);
        scanf("%f", &prod[i][1]);
        }
    for(i=0;i<TAM;i++){
        total = total + prod[i][0]*prod[i][1];
    }
    printf("A quantidade comprada do ultimo produto foi %f\n", prod[0][9]);
    printf(" O preço unitário do quinto produto %f\n", prod[0][4]);
    printf("Os produtos que possuem preço unitário maior do que R$10,00 são %f\n", prod[0][4]);
    printf("Os valores totais gastos com cada um dos produtos foram:\n");
    for(i=0;i<TAM;i++){
        printf("%f %f", prod[i][0], prod[i][1]);
    }
return 0;
}
return 0;
// */
