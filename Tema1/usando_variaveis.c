#include <stdio.h>
#include <stdlib.h>

int main () {

    int idade;
    idade = 16;
    printf("Ana tem %d anos.\n", idade);
    idade = 17;
    printf("Ana tem %d anos.\n", idade);
    idade = idade + 1;
    printf("Ana tem %d anos.\n", idade);

    float nota;
    nota = 9.5;
    printf("Tirei %.2f em LP1\n", nota);

    float V1, V2, media;
    V1 = 5;
    V2 = 9.5;
    media = (V1+V2)/2;
    printf("Sua nota 1 foi %.1f\n", V1);
    printf("Sua nota 2 foi %.1f\n", V2);
    printf("Sua media na disciplina de LP1 foi %2.f\n", media);


return 0;

}
