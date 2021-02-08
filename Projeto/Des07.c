#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i;
    float notas[10][4];

    printf("Digite as notas dos seus alunos.\n");
    for(i=0;i<10;i++){
        printf("Informe a nota do aluno %d para o trabalho (T)\n", i+1);
        scanf("%f", &notas[i][0]);

        printf("Informe a nota do aluno %d para o seminario (S)\n", i+1);
        scanf("%f", &notas[i][1]);

        printf("Informe a nota do aluno %d para o prova (P)\n", i+1);
        scanf("%f", &notas[i][2]);

        notas[i][3]=(notas[i][0]*20+notas[i][1]*30+notas[i][2]*50)/100, i+1;
        }

        printf("%.2f %.2f %.2f %.2f\n", notas[i][0], notas[i][1], notas[i][2], notas[i][3], i+1);

return 0;
}
