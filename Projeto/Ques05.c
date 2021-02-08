#include <stdio.h>
#include <stdlib.h>

int main (void){

    int i, n;
    float compra;
    n=1;

    printf("Digite o valor da sua compra\n");
    scanf("%f", &compra);

    for(i=1;i>=n;i=i+1){
        printf("Digite o valor %dº prestacao deve ser %.2f:\n", i, compra);
        compra=compra-10;
        }


return 0;
}
