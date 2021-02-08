#include <stdio.h>
#include <stdlib.h>

int main(){
    float cel, fah;
    cel = 37;
    fah = (9*cel+160)/5;

    printf("O valor de %.0f graus centigrados correspondem ha %.2f graus Fahrenheit\n", cel, fah);

return 0;
}
