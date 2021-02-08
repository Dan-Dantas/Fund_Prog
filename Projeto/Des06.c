#include <stdio.h>
#include <stdlib.h>

int main(void){
    float vfrete, dist, reg, vreg, vsrast, vnrast, rast, valortotal;
    int npecas, milpecas, pecasext, cadapeca;

    cadapeca=1.2;
    pecasext=1.056;
    vsrast=200;
    vnrast=0;
    milpecas, pecasext, cadapeca;

    printf("O cliente gostaria que a sua entrega tenha rastreamento?\n");
    printf("Digite 1 para aderir SIM ao rastreamento sim  e 2 para NAO aderir ao rastreamento \n");
    scanf("%f", &rast);

    if(rast==1){
        printf("Sera cobrado uma taxa de R$ 200 do valor total.\n");
    }
    else{
        printf("Nao sera cobrado uma taxa de rastreamento");
    }


    printf("Digite a quantidade de pecas que o cliente deseja comparar.\n");
    scanf("%d", &npecas);

    printf("Regiões para frete, conforme abaixo:\n");
    printf("1 - Sul\n");
    printf("2 - Sudeste\n");
    printf("3 - Centro-oeste\n");
    printf("Informe sua regiao: \n");
    scanf("%d", &reg);

    if(npecas<=1000){
        printf("O valor sera conforme a regiao por cada peça transportada: Sendo R$ 1.0 para regiao 1-Sul, R$ 1.2 para regiao 2-Sudeste e R$ 1.3 para regiao 3-Centro-oeste.\n");
        switch (reg){
        case 1:
            printf("Sua regiao e a sul e o valor do transporte da peca e R$ 1.0\n");
            vreg=1;
            break;

        case 2:
            printf("Sua regiao e a Sudeste e o valor do transporte da peca e R$ 1.2\n");
            vreg=1.2;
            break;
        case 3:
            printf("Sua regiao e a Centro-oeste e o valor do transporte da peca e R$ 1.3\n");
            vreg=1.3;
            break;
        }


        }

     if(npecas>1000){
        printf("Valor normal para ate mil pecas; o numero de pecas que ultrapassar mil tem desconto conforme a regiao.\n

        switch (reg){
        case 1:
            printf("Sua regiao e a sul e o valor do transporte da peca e R$ 1.0\n");
            pecasext=0.9;
            break;

        case 2:
            printf("Sua regiao e a Sudeste e o valor do transporte da peca e R$ 1.2\n");
            pecasext=1.056;
            break;
        case 3:
            printf("Sua regiao e a Centro-oeste e o valor do transporte da peca e R$ 1.3\n");
            pecasext=1.131;
            break;
    }


        valortotal=pecasext*npecas+rast

        printf("Taxa do rastreamento: %f\n", rast);
        printf("Valor do frete pelas peças: %f\n", vreg+pecasext);
        printf("Total do frete: %f\n", vreg+pecasext+rast);

return 0;
}
