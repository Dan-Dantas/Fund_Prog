#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i;
    float prod[2][10];
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
    printf(" O pre�o unit�rio do quinto produto %f\n", prod[0][4]);
    printf("Os produtos que possuem pre�o unit�rio maior do que R$10,00 s�o %f\n", prod[0][4]);
    printf("Os valores totais gastos com cada um dos produtos foram:\n");
    for(i=0;i<TAM;i++){
        printf("%f %f", prod[i][0], prod[i][1]);
    }
return 0;
}
