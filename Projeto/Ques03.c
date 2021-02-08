#include <stdio.h>
#include <stdlib.h>

int main (void){

    int a, b, c, d, ap01, ap02, ap03,ap04, tentativas = 0;
    a=16;
    b=23;
    c=28;
    d=45;
    ap01=0;
    ap02=0;
    ap03=0;
    ap04=0;

    printf("Loto4 é uma loteria que sorteia 4 números\n");
    printf("Que premia R$100.000,00 a quem acertar todos eles e R$10.000 a quem acertar apenas 3");
    printf("Escolha seus 4 numeros, estes devem ser entre 01 e 60\n");

    scanf("%i %i %i %i", &ap01, &ap02, &ap03, &ap04);
    tentativas = tentativas + 1;

    while(ap1 != a && ap2 != b && ap3 != c && ap4 != d && tentativas < 10)
    {
        printf("Jogue novamente: ");
        scanf("%i %i %i %i", &ap01, &ap02, &ap03, &ap04);
        tentativas = tentativas + 1;
    }
    if(ap1 != a && ap2 != b && ap3 != c && ap4 != d)
    {
    printf("Parabens voce ganhou R$100.000,00 em %i tentativas!", tentativas);
    }
    else
    {
    printf("Você nao tem mais dinheiro para jogar!");
    }
return 0;
}
