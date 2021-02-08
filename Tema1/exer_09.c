#include <stdio.h>
#include <stdlib.h>

int main(){
    float cel, fah;

    printf("Digite os graus centigrados\n");
    scanf("%.2f", &cel);

    fah=(9*cel+160)/5;

    printf("Sua temperatura e %.2f graus fahrenheit\n", fah);

return 0;
}
